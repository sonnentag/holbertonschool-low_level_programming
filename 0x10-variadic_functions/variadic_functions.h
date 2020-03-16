#ifndef _VAR_FUNCS_H
#define _VAR_FUNCS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
void op_c(va_list args);
void op_i(va_list args);
void op_f(va_list args);
void op_s(va_list args);

typedef struct vops
{
	char *fmt;
	void (*f)(va_list args);
} va_ops;

#endif
