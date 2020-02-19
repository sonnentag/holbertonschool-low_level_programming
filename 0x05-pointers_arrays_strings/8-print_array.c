#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: provided array
 * @n: provided number of elements to print
 */
void print_array(int *a, int n)
{
	int x = 1;

	if (a != NULL)
	{
		printf("%d", a[0]);
		while (x < n)
		{
			printf(", %d", a[x]);
		}
		x++;
	}
	printf("\n");
}
