#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: provided array
 * @n: provided number of elements to print
 */
void print_array(int *a, int n)
{
	int x = 0;

	printf("%d", a[x]);
	while (x < (n - 1))
	{
		x++;
		printf(", %d", a[x]);
	}
	printf("\n");
}
