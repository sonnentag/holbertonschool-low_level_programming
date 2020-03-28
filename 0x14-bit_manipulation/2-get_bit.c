#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index to return
 * Return: result or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	val = 1 << index;
	if ((val & n) > 0)
		return (1);
	else
		return (0);
}
