#include "holberton.h"

/**
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest) 
		dest++;
	while (n > 0)
	{
		((*dest++ = *src++));
		n--;
	}

	return (dest);
}
