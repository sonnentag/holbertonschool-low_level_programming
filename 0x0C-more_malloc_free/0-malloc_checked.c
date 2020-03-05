#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc and confirm
 * @b: provided mem size to malloc
 * Return: ptr to mem malloced or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return (ptr);
}
