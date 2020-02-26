#include "holberton.h"

/**
 * factorial - recursive function to return factor of given number
 * @n: given
 * Return: factor or -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
