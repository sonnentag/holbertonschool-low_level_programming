#include "holberton.h"

/**
 * _print_rev_recursion - print reverse of string using recursion
 * @s: string elements
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == (char)0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
