#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 * @i: provided
 * Return: result
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');

	return (i);
}
