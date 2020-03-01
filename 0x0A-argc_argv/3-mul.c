#include <stdio.h>

/**
 * main - multiply args
 * @argc: - arg count
 * @argv: - arg values
 * Return: 0 for success or nothing given, 1 for non-numerical arg provided
 */
int main(int argc, char **argv)
{
	int mul, res = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		res = 1;
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}

	return (res);
}
