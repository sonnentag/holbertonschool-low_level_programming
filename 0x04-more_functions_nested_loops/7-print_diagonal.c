#include "holberton.h"

/**
 * print_diagonal - print n length diagonal line
 * @n: provided
 */
void print_diagonal(int n)
{
	int s;
	int x = 0;

	while (n > 0)
	{
		s = 0;
		x++;
		while (s < x)
		{
		_putchar(32);
		s++;
		}
		_putchar(92);
		n--;
		_putchar('\n');
	}
}
