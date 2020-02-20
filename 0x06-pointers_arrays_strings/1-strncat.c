#include "holberton.h"

/**
 * _strncat - concatenate two strings up to n chars
 * @dest: provided destination string
 * @src: provided source string
 * @n: number of characters to cat
 * Return: modified destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	void *ret = dest;

	while (*dest)
		dest++;
	while (n > 0)
	{
		((*dest++ = *src++));
		n--;
	}

	return (ret);
}
