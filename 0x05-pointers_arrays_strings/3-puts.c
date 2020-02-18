#include "holberton.h"

/**
 * _puts - print string
 * @str: provided string as array
 */
void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
