#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: provided number
 * @index: index to set
 * Return: 1 or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= -(1 << index);

	return (1);
}
