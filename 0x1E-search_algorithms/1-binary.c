#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"


void print_array(int *array, int l, int r);

/**
 * binary_search - perform binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * Return: index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m;

	if (array)
	{
		l = 0;
		r = (int)size - 1;

		while (l <= r)
		{
			print_array(array, l, r);
			m = ((l + r) / 2);

			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m - 1;
			else
				return (m);
		}
	}

	return (-1);
}

/**
 * print_array - print array being searched
 * @array: array being searched
 * @l: left
 * @r: right
 */
void print_array(int *array, int l, int r)
{
	int loop;

	printf("Searching in array: ");

	for (loop = l; loop <= r; loop++)
	{
		printf("%d", array[loop]);
		if (loop != r)
			printf(", ");
	}
	printf("\n");
}
