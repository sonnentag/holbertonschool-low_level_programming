#include "holberton.h"

/**
 * _sqrt_recursion - return square root of a number
 * @n: provided number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - helper function to find square root of a number
 * @p: provided number
 * @x: multex 
 * Return: result if whole or -1 otherwise
 */
int square(int p, int x)
{
	int y = x * x;

	if (y == p)
		return (x);
	else if (y < p)
		return (square(p, x + 1));
	else
		return (-1);
}
