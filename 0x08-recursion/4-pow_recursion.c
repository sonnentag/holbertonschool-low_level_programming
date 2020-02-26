#include "holberton.h"

/**
 * _pow_recursion - return value of x raised to y
 * @x: provided
 * @y: provided
 * Return: -1 if negative, 1 if 0, otherwise result
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	n = (x * _pow_recursion(x, y - 1));

	return (n);
}
