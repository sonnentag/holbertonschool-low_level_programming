#include "holberton.h"

/**
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	while (*dest) 
		dest++;
	while ((*dest++ = *src++));
	*dest++ = '\0';

	return dest;
}
