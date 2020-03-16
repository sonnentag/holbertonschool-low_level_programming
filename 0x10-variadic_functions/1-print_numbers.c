#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: delimiter
  * @n: number of elements
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va_list;

	va_start(va_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va_list, int));
		if ((separator) && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(va_list);
}
