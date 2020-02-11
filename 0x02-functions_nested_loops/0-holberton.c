#include "holberton.h"

/**
 * main - use _putchar function to write Holberton
 *
 * Return: 0
 */
int main(void)
{

	int n;
	char hbtn[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\0'};

	for (n = 0; n < 9; n++)
	{
		_putchar(hbtn[n]);
	}
	_putchar('\n');

	return (0);
}
