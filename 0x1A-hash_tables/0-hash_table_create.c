#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nt;
	unsigned long int i = 0;

	nt = malloc(sizeof(hash_table_t) * 1);
	if (!nt)
		return (NULL);

	nt->array = malloc(sizeof(hash_node_t *) * size);
	if (!nt->array)
		return (NULL);

	for (; i < size; ++i)
		nt->array[i] = NULL;

	nt->size = size;

	return (nt);
}
