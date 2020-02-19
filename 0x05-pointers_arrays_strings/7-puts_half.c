#include "holberton.h"

/**
 * puts_half - print last half of a string
 * @str: provided string
 */
void puts_half(char *str)
{
	int start;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = ((length + 1) / 2);
	}
	while (start < length)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
