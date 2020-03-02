#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of coins needed for cents given
 * @argc: arg count
 * @argv: arg values
 * Return: 1 if no arg or negative, 0 otherwise
 */
int main(int argc, char **argv)
{
	int coins, change;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (coins = 0; change > 0; coins++)
	{
		if (change >= 25)
		{
			change -= 25;
		}
		else if (change >= 10)
		{
			change -= 10;
		}
		else if (change >= 5)
		{
			change -= 5;
		}
		else if (change >= 2)
		{
			change -= 2;
		}
		else
		{
			change -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
