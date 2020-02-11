#include "holberton.h"

/**
 * times_table - print times table
 *
 */
void times_table(void)
{
	int n1, n2, n3, n4;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			n3 = n1 * n2;
			n4 = n1 * (n2 + 1);
			if (n3 <= 9)
			{
				_putchar(n3 + '0');
			}
			else if (n2 <= 8)
			{
				_putchar(n3 / 10 + '0');
				_putchar(n3 % 10 + '0');
			}
			else
			{
				_putchar(n3 / 10 + '0');
				_putchar(n3 % 10 + '0');
			}
			if (n2 <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n4 <= 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

