#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: provided array
 * @n: provided number of elements to print
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x = 1;

	printf("%d", a[0]);
	while (x < n)
	{
		printf(", %d", a[x]);
		x++;
	}
	printf("\n");

	return (0);
}
