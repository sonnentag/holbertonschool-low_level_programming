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
	unsigned int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *entry, *prev;

	if (!index)
		return (0);
	entry = ht->array[index];
	if (entry)
		while (entry)
		{
			if (strcmp(entry->key, key) == 0)
			{
				free(entry->value);
				entry->value = malloc(strlen(value) + 1);
				strcpy(entry->value, value);
				return (1);
			}
			prev = entry;
			entry = prev->next;
		}
	entry = malloc(sizeof(hash_node_t) * 1);
	if (entry)
	{
		entry->key = malloc(strlen(key) + 1);
		entry->value = malloc(strlen(value) + 1);
	}
	if ((!entry->key) || (!entry->value))
	{
		if (entry->key)
			free(entry->key);
		if (entry->value)
			free(entry->value);
		free(entry);
		return (0);
	}
	strcpy(entry->key, key);
	strcpy(entry->value, value);
	entry->next = NULL;
	ht->array[index] = entry;
	return (1);
}
