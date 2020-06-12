#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - add key/value pair to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success or else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	if ((ht) && (key) && (value) && (strlen(key) > 0))
		index = key_index((unsigned char *)key, ht->size);
	if ((index) && (!ht->array[index]))
	{
		if (entry)
		{
			entry->key = strdup(key), entry->value = strdup(value);
			entry->next = NULL;
			ht->array[index] = entry;
			return (1);
		}
	}
	else
		if (index)
		{
			entry = ht->array[index];
			while (entry)
			{
				if (strcmp(entry->key, key) == 0)
				{
					free(entry->value);
					entry->value = strdup(value);
					break;
				}
				entry = entry->next;
			}
			entry = malloc(sizeof(hash_node_t));
			if (entry)
			{
				entry->key = strdup(key);
				entry->value = strdup(value);
				entry->next = ht->array[index];
				ht->array[index] = entry;
			}
		return (1);
		}
	return (0);
}
