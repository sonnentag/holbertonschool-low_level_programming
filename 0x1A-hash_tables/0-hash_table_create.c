#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t) * 1);
	unsigned long int i = 0;

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * new_table->size);

	for (; i < new_table->size; ++i)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
