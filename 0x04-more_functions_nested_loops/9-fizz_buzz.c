#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - print 0-100 with s/3||5/fizz||bang/g
 * Return: 0
 */
int main(void)
{
	int max = 100;
	int y = 0;
	int n = 1;

	while (n < max)
	{
		if (n % 3 == 0)
		{
			y = 1;
		}
		if (n % 5 == 0)
		{
			y = (y + 3);
		}
		if ((y == 1) || (y == 4))
		{
			printf("Fizz");
		}
		if ((y == 3) || (y == 4))
		{
			printf("Buzz");
		}
		if (y == 0)
		{
			printf("%d", n);
		}
		putchar(32);
		n++;
		y = 0;
	}
	putchar('\n');
return (0);
}
