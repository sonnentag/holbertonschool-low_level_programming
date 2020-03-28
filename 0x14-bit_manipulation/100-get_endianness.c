#include "holberton.h"

/**
 * get_endianness - determine cpu endianness
 * Return: 1 for little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);

	return (0);
}
