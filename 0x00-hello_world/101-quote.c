#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - function using write to output assigned string of text
 * let's declare our int for length
 * and char for the string itself
 * get the length of the str defined above
 * write it to fd 2
 * write a new line
 * Return: 1
 */
int main(void)
	{
	int strl;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	strl = sizeof(str);
	write(2, str, strl);

	return (1);
}