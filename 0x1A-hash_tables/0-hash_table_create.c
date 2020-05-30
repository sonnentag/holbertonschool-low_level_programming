#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **temparray;
	unsigned long int i = 0;

	temparray = malloc(sizeof(hash_node_t *) * size);
	if (!temparray)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t) * 1);
	if (!new_table)
	{
		free(temparray);
		return (NULL);
	}

	for (; i < new_table->size; ++i)
		temparray[i] = NULL;

	new_table->size = size;
	new_table->array = temparray;

	return (new_table);
}
