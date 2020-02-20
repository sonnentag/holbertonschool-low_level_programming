#include "holberton.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: provided array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int temp, *arr, *x;

	arr = a;
	for (x = arr + n - 1; arr < x; ++arr, --x)
	{
		temp = *arr;
		*arr = *x;
		*x = temp;
	}
}

