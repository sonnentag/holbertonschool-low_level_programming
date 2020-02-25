#include "holberton.h"



void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
/**
 *
 *
 */
void print_chessboard(char (*a)[8])
{
int x, n;
for (x = 0; x < 8; x++)
{
for (n = 0; n < 8; n++)
{
_putchar(x[a][n]);
}
_putchar((char)10);
}
}
