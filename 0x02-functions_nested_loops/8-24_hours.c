#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	int n = 0;
	int x = 0;

	while (n != 24)
	{
		for (x = 0; x != 60; x++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');
		}
		n++;
	}
}
