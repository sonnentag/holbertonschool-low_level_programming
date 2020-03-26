#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary string
 * Return: result in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int l = _strlen(b);
	int p = _pow_rec(2, l - 1);
	int c = 0, d = 0;
	unsigned int r = 0;

	if (b)
	{
		while (c < l)
		{
			d = b[c] - 48;
			if (d != 0 && d != 1)
				return (0);
			r += d * p;
			p = p / 2;
			c++;
		}
	}

	return (r);

}

/**
 * _strlen - count characters in array
 * @s: provided value in array
 * Return: length of array
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}

/**
 * _pow_rec - return value of x raised to y
 * @x: provided
 * @y: provided
 * Return: -1 if negative, 1 if 0, otherwise result
 */
int _pow_rec(int x, int y)
{
	int n;

	if (x == 0)
		return (0);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	n = (x * _pow_rec(x, y - 1));

	return (n);
}
