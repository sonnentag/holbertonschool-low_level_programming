#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: string
 * @accept: acceptable characters
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int r, c;

	for (r = 0; s[r]; r++)
	{
		for (c = 0; accept[c]; c++)
		{
			if (accept[c] == s[r])
				break;
		}
		if (!accept[c])
			break;
	}

	return (r);
}
