#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *optr;
	unsigned int i, size;

	optr = ptr;
	if (new_size == old_size)
		return (optr);

	if (new_size == 0 && optr != NULL)
	{
		free(optr);
		return (NULL);
	}

	if (new_size > old_size)
		size = old_size;
	else
		size = new_size;

	nptr = malloc(sizeof(*nptr) * new_size);
	if (!nptr)
		return (NULL);

	if (optr != NULL)
	{
		for (i = 0; i < size; i++)
			nptr[i] = optr[i];

		free(optr);
	}

	return (nptr);
}
