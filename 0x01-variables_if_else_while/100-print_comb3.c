#include <stdio.h>

/**
 * main - print 00-99 with commas
 * Return: 0
 */
int main(void)
{
	int n1, n2;
	for (n1 = 48; n1 <= 57; n1++)
	{
		for ( n2 = 49; n2 <= 57; n2++)
		{
			if (n1 < n2)
			{
			putchar (n1);
			putchar (n2);
			if (n1 == 56 && n2 == 57)
			{
			n1++;
			}
			else
			{
				putchar (',');
				putchar (' ');
			}
			}
		}
	}
	putchar ('\n');

	return (0);
}
