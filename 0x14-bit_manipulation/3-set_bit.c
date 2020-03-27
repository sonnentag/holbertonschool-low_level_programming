#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: provided number
 * @index: index to set
 * Return: 1 or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
