#include <stdio.h>

/**
 * main - print single digit base 10 numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');

	return (0);
}
