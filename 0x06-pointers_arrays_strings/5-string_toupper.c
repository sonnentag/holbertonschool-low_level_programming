#include "holberton.h"

/**
 * string_toupper - convert string to all uppercase
 * @str: provided string
 * Return: result
 */

char *string_toupper(char *str)
{
	char *ret = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		++str;
	}

	return (ret);
}
