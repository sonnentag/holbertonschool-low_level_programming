#include <stdio.h>

/**
 * main - print alphabet in lower case and upper case
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
