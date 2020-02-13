#include "holberton.h"

/**
 * print_diagonal - print n length diagonal line
 * @n: provided
 */
void print_diagonal(int n)
{
	int s;
	int x = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			s = 0;
			while (s < x)
			{
				_putchar(32);
				s++;
			}
			x++;
			_putchar(92);
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
