#ifndef _VAR_FUNCS_H
#define _VAR_FUNCS_H

#include <stdarg.h>
/**
 * struct va_ops - specifier to func pointer
 * @fmt: format specifier
 * @f: func pointer to each
 * va_ops: typedef
 */
typedef struct va_ops
{
	char *fmt;
	void (*f)();
} va_ops;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void op_c(va_list val);
void op_i(va_list val);
void op_f(va_list val);
void op_s(va_list val);

#endif
