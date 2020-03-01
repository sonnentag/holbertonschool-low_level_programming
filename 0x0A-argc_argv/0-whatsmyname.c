#include <stdio.h>

/**
 * main - print name of this command as it's run
 * @argc: arg count
 * @argv: arg values
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
