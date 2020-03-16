#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all arguments
 * @n: number of elements
 * Return: sum or 0 if no elements given
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list va_list;

	va_start(va_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(va_list, int);

	va_end(va_list);

	return (sum);
}
