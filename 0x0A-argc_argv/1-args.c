#include <stdio.h>

/**
 * main - print number of args given at command line
 * @argc: arg count
 * @argv: void
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc);

	return (0);
}
