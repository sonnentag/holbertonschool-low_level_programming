#include "holberton.h"

/**
 * puts2 - print every other character of string
 * @str: provided string
 */
void puts2(char *str)
{
	int x = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	while (x < length)
	{
		if (x % 2 == 0)
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
