#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals in matrix
 * @a: values in matrix coordinates
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int lr = 0, rl = 0;
	int i, j, inc;

	for (i = 0; i < size; i++)
	{
		inc = (i * size) + i;
		lr += *(a + inc);
	}
	for (j = 0; j < size; j++)
	{
		inc = (j * size) + (size - 1 - j);
		rl += *(a + inc);
	}
	printf("%i, %i\n", lr, rl);
}
