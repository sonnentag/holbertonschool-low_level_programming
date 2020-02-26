#include "holberton.h"

/**
 * _puts_recursion - put string using recursion
 * @s: string elements
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == (char)0)
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
