#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - add arguments
 * @argc: arg count
 * @argv: arg values
 * Return: 0 for success or nothing given, 1 for non-numerical error
 */
int main (int argc, char **argv)
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv > 47 && *argv < 58)
		{
			{
				add += atoi(argv[i]);
			}
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", add);

	return (0);
}
