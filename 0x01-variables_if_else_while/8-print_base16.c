#include <stdio.h>

/**
 * main - print 0-16 in hex
 * Return: 0
 */
int main(void)
{
	char n, c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar ('\n');

	return (0);
}
