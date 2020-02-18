#include "holberton.h"

/**
 * swap_int - swap the value of 2 integers
 * @a: provided first
 * @b: provided second
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
