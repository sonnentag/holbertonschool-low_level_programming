#include <stdio.h>

int start_f(int argc, char **argv) __attribute__((constructor));

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * start_f - start constructor
 * @argc: arguments count
 * @argv: arguments
 * Return: 0
 */
int start_f(int argc, char **argv)
{
	write(1, "You're beat! and yet, you must allow,\n", 37);
	write(1, "I bore my house upon my back!\n", 29);

	return (0);
}
