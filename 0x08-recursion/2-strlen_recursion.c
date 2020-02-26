#include "holberton.h"

/**
 * _strlen_recursion - return length of string using recursion
 * @s: string elements
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == (char)0)
		return (0);

	n = 1 + _strlen_recursion(s + 1);

	return (n);
}
