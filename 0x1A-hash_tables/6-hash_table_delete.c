#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete provided hash table.
 * @ht: provided hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;

	while (index < ht->size)
	{
		if (ht->array[index])
		{
			while (ht->array[index] != NULL)
			{
				current = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = current;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
