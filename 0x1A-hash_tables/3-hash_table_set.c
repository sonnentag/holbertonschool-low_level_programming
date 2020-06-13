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
	unsigned long int index;
	hash_node_t *entry, *temp = NULL;

	if ((ht) && (key) && (value))
	{
		index = key_index((unsigned char *)key, ht->size);
		temp = ht->array[index];

		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		entry = malloc(sizeof(hash_node_t));
		if (entry)
		{
			entry->key = strdup(key);
			entry->value = strdup(value);
			entry->next = NULL;
			if (ht->array[index])
				ht->array[index] = entry;
			else
			{
				entry->next = ht->array[index];
				ht->array[index] = entry;
			}
			return (1);
		}
	}

	return (0);
}
