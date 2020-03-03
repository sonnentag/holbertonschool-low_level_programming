#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create array of characters
 * @size: size of array
 * @c: provided character
 * Return: Null if size 0 or malloc fails, pointer to array otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(*ar));
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ar[n] = c;

	return (ar);
}
