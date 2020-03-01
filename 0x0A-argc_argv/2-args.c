#include <stdio.h>

/**
 * main - print all values of argv
 * @argc: arg count
 * @argv: arg values
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
