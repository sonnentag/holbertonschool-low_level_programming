#include "holberton.h"

/**
 * leet - translate a string to l33t
 * @str: provided
 * Return: translated string
 */
char *leet(char *str)
{
	void *ret = str;
	char x[10][2] = {
		{'a', '4'}, {'A', '4'}, {'e', '3'}, {'E', '3'}, {'o', '0'},
		{'O', '0'}, {'t', '7'}, {'T', '7'}, {'l', '1'}, {'L', '1'}
	};
	int n;

	while (*str)
	{
		for (n = 0; n <= 10; n++)
		{
			if (*str == x[n][0])
			{
				*str = x[n][1];
			}
		}
		str++;
	}

	return (ret);
}
