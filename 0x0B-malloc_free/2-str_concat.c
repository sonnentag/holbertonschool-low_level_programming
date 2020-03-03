#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result or else NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int s3l, n1, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3l = _strlen(s1) + _strlen(s2) + 1;
	s3 = malloc(s3l);

	if (s3 == NULL)
		return (NULL);

	for (n1 = 0; s1[n1] != '\0'; n1++)
		s3[n1] = s1[n1];

	for (n2 = 0; s2[n2] != '\0'; n1++, n2++)
		s3[n1] = s2[n2];

	s3[s3l] = (char)0;

	return (s3);
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
