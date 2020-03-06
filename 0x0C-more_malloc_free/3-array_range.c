#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create a sequential array of ints within range
 * @min: number to increment from
 * @max: number to increment to
 * Return: array on success, NULL on failure or if min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int diff, n = 0;

	if (min > max)
		return (NULL);

	diff = (max - min + 1);
	arr = malloc(diff * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	while (n < diff)
		arr[n++] = min++;

	return (arr);
}
