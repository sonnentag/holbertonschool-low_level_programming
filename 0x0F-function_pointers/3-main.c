#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to calculate arguments
 * @argc: arg count
 * @argv: arg values
 * Return: 0 on success, 98-100 for various errors or failure.
 */
int main(int argc, char **argv)
{
	int i1, i2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i1 = atoi(argv[1]);
	i2 = atoi(argv[3]);

	if (i2 == 0 && (*argv[2] == (char)37 || *argv[2] == (char)47))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (get_op_func(argv[2])(i1, i2)));

	return (0);
}
