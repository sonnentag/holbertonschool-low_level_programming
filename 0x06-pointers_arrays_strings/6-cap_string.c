#include "holberton.h"

/**
 * cap_string - capitalize first char of every word in a string
 * @str: provided string
 * Return: result
 */
char *cap_string(char *str)
{
	void *ret = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == '\n' ||
				str[i - 1] == '\t' || str[i - 1] == ',' || str[i - 1] == ';'
				|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}')
			{
				str[i] -= 32;
			}
		}
	}

	return (ret);
}
