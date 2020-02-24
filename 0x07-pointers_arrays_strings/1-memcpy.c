#include "holberton.h"

/**
 * _memcpy - copy byte to specific memory address
 * @dest: destination byte
 * @src: source byte
 * @n: number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *buff = dest;

	for (; n > 0; n--)
	{
		*buff++ = *src;
		src++;
	}

	return (dest);
}
