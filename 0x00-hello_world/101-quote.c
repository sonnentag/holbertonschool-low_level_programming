#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - function using write to output assigned string of text
 * Return: 1
 */
int main(void)
	{
/* let's declare our int for length */
	int strl;
/* and char for the string itself. */
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

/* get the length of the str defined above */
	strl = sizeof(str);
/* write it to fd 2 */
	write(2, str, strl);
/* write a new line */
	write(2, "\n", 1);

/* and return 1 */
	return (1);
}
