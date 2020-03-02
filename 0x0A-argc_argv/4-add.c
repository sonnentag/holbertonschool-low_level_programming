#include <stdio.h>
#include <stdlib.h>

/**
 * main - add arguments
 * @argc: arg count
 * @argv: arg values
 * Return: 0 for success or nothing given, 1 for non-numerical error
 */
int main(int argc, char **argv)
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		add += atoi(argv[i]);
		while (*argv[i])
		{
			if (*argv[i] >= 58 || *argv[i] <= 47)
			{
				printf("%s\n", "Error");
				return (1);
			}
			argv[i]++;
		}
	}
	printf("%d\n", add);

	return (0);
}
