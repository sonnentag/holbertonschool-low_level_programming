#include "holberton.h"

/**
 * print_triangle - print alligned right triangle to length/width of size
 * @size: provided
 */
void print_triangle(int size)
{
	int c;
	int s;
	int x;

	if (size > 0)
	{
		for (s = 0; s < size; s++)
		{
			for (c = size; c > s; c--)
			{
				_putchar(32);
			}
			for (x = 0; x <= s; x++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar('\n');
	}
}
