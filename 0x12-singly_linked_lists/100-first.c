#include <stdio.h>

void start_f(void) __attribute__((constructor));

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * start_f - print text before main
 */
void start_f(void)
{
	write(1, "You're beat! and yet, you must allow,\n", 38);
	write(1, "I bore my house upon my back!\n", 30);
}
