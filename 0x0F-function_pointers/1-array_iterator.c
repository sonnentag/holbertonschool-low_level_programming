#include "function_pointers.h"

/**
 * array_iterator - call function to perform on iterated array
 * @array: array
 * @size: size of array
 * @action: action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if ((size) && (array) && (action))
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
