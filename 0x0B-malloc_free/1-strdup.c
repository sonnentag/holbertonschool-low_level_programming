#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: provided string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(_strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	_strcpy(dup, str);

	return (dup);
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

/**
 * _strcpy - copy a string
 * @src: provided source pointer
 * @dest: provided destination [ointer
 * Return: address of destination
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	while (x <= length)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
