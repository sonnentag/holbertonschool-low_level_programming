#include "holberton.h"

/**
 * print_chessboard - print a chessboard
 * @a: array of chesspieces
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
