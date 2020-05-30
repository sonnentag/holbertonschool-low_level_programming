#include "hash_tables.h"
#include <string.h>

/**
 * key_index - get index of key in hash table
 * @key: key
 * @size: size of table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
