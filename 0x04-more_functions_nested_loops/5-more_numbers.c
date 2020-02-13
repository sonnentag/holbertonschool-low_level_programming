#include "holberton.h"

/**
 * more_numbers - _putchar 0-14 ten times
 */
void more_numbers(void)
{
	int x = 0;
	int n;

	while (x < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
		x++;
	}
}
