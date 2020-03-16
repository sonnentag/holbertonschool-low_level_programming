#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list va_list;

	va_start(va_list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(va_list, char *);
		if (!s)
			printf("(nil)");
		else	
			printf("%s", s);
		if ((separator) && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(va_list);
}
