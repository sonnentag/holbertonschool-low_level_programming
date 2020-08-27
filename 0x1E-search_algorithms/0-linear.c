#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - perform linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int r = 0;

	if (array)
		while (size > 0)
		{
			printf("Value checked array[%d] = [%d]\n", r, array[r]);
			if (array[r] == value)
				return (r);

			size--;
			r++;
		}

	return (-1);
}
