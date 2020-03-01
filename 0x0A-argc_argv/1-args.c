#include <stdio.h>

/**
 * main - print number of args given at command line
 * @argc: arg count
 * @argv: void
 * Return: 0
 */
int main(int argc, char **argv)
{
	argc--;
	if (argc > 0)
	{
		printf("%d\n", argc);
	}

	return (0);
}
