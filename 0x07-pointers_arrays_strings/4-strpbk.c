#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: string
 * @accept: acceptable characters
 * Return: length
 */
char *_strpbrk(char *s, char *accept)
{

	for (; *s; s++)
	{
		if (_strchr (accept, *s) != 0)
			return ((char *)s);
	}
	return (0);
}

/**
 * _strchr - return character from string
 * @s: string
 * @c: character
 * Return: remainder of string or 0
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}

	return (0);
}
