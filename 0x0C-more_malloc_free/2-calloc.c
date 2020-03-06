#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory and set to 0
 * @nmemb: number of memory blocks
 * @size: size of blocks
 * Return: memory address, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int n = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);

	while (n < (nmemb * size))
		arr[n++] = 0;

	return (arr);
}
