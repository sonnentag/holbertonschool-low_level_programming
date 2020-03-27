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

	val = (n >> index) & 1;

	if ((val == 0) || (val == 1))
		return (val);
	else
		return (-1);
}
