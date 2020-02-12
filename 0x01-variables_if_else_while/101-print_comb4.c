#include <stdio.h>
#include <stdlib.h>

/**
 * main - increment 3 digits in succession next digit repeating previous
 *
 * Return: 0
 */
int main(void)


{
int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
				if (x == 55 && y == 56 && z == 57)
				{
					x++;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
putchar('\n');

return (0);
}
