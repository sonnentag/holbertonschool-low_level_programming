#include "holberton.h"

/**
 * main - use _putchar function to write 0-9 while skipping 2 and 4
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');

	return (0);
}
