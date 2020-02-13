#include "holberton.h"

/**
 * print_line - print n length line
 * @n: provided
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
