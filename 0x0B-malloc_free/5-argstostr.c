#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result or else NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int al = 0, x = 0, n, i;

	if (ac == 0 || av == NULL)
		return NULL;

	for (n = 1; n < ac; n++)
		al += _strlen(av[n]);

	str = malloc(sizeof(char) * al + 1);
	if (str == NULL)
		return (NULL);

	for (n = 0; n < ac; n++) 
	{
		for (i = 0; av[n][i]; i++)
		{
			str[x] = av[n][i]; 
			x++;
		}
		if (str[x] == '\0')
			str[x++] = '\n';
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
