#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *sep;
	va_list val;
	va_ops ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		{NULL, NULL}
	};

	i = 0;
	sep = "";
	va_start(val, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(ops[j].fmt))
			{
				printf("%s", sep);
				ops[j].f(val);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

/**
  * p_char - prints characters
  * @c: character to print
  */
void op_c(va_list val)
{
	printf("%c", va_arg(c, int));
}

/**
  * p_int - prints integers
  * @i: integer to print
  */
void op_i(va_list val)
{
	printf("%d", va_arg(i, int));
}

/**
  * p_float - prints floats
  * @f: float to print
  */
void op_f(va_list val)
{
	printf("%f", va_arg(f, double));
}

/**
  * p_string - prints strings
  * @s: string to print
  */
void op_s(va_list val)
{
	char *str;

	str = va_arg(s, char *);
	if (!str)
		str = "(nil)";

	printf("%s", str);
}
