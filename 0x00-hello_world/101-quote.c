#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - function using write to output assigned string of text
 * Return: 0
 */
int main(void)
	{
/* let's declare our string char variable. */
	int strl;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	strl = sizeof(str);
	write(2, str, strl);

/* and return 1 */
	return (1);
}
