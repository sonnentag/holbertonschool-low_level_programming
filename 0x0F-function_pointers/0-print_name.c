#include "function_pointers.h"

/**
 * print_name - function that calls function pointer to print name
 * @name: name to print
 * @f: function pointer to call
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
