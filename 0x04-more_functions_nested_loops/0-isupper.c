#include "holberton.h"

/**
 * _isupper - test if provided character is upper case
 * @c: provided
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
