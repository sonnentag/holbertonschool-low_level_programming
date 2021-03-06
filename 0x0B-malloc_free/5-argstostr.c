#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - convert arguments to new string
 * @ac: arg count
 * @av: arg values
 * Return: result or else NULL on failure, count 0, or NULL values
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int al = 0, x = 0, n, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		al += _strlen(av[n]);
		al++;
	}
	al++;

	str = malloc(sizeof(char) * al);
	if (str == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (i = 0; av[n][i] != '\0'; i++)
		{
			str[x] = av[n][i];
			x++;
		}
			str[x] = '\n';
			x++;
	}

	return (str);
}

/**
 * _strlen - count characters in array
 * @s: provided value in array
 * Return: length of array
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
