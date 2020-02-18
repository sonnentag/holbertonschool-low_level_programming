#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: provided string as array
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	while (counter > 0)
	{
		counter--;
		_putchar(s[counter]);
	}
	_putchar('\n');
}
