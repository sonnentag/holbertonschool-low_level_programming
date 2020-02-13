#include "holberton.h"

/**
 * _isdigit - test if provided character is a digit
 * @c: provided
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
