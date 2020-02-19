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

	while (x < n)
	{
		if (x < (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
		printf("%d", a[x]);
		}
		x++;
	}
	printf("\n");
}
