#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - get value for key in hash table
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *entry;

	if ((!key) || (strlen(key) == 0) || (!ht))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (!index)
		return (NULL);
	entry = ht->array[index];
	if (!entry)
		return (NULL);

	while (entry)
	{
		if (strcmp(entry->key, key) == 0)
			return (ht->array[index]->value);
		entry = entry->next;
	}

	return (NULL);
}
