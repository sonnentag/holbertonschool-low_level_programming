#include "holberton.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: Result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			++i;

		n = n >> 1;
	}

	return (i);
}
