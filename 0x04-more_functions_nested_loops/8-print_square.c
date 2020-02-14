#include "holberton.h"
#include <stdio.h>

/**
 * print_square - print square of pound signs up to n chars
 * @size: provided
 */
void print_square(int size)
{
	int c;
	int n = 0;

	if (size > 0)
	{
		while (n < size)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
