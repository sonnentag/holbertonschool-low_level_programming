#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate mem for multidim array
 * @width: grid width
 * @height: grid height
 * Return: NULL if error, 0 otherwise
 */
int **alloc_grid(int width, int height)
{

	int i, n, **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			array[i][n] = 0;
	}

	return (array);
}
