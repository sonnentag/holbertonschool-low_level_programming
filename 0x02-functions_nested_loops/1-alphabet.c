#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lower case followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
