#include "function_pointers.h"

/**
 * int_index - find index of compared integer in array
 * @array: array of integers to compare to
 * @size: size of array
 * @cmp: function which compares
 * Return: index on success, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if ((!array) || size <= 0 || (!cmp))
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		return (x);
	}

	return (-1);
}
