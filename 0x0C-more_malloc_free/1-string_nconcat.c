#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concat 2 strings up to n characters of 2nd
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters of s2 to cat
 * Return: concatenated string or null if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int s3l, n1;
	unsigned int s2l, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s2l = _strlen(s2);
	if (s2l > n)
		s2l = n;

	s3l = _strlen(s1) + s2l + 1;
	s3 = malloc(sizeof(char) * s3l);
	if (s3 == NULL)
		return (NULL);

	for (n1 = 0; s1[n1] != '\0'; n1++)
		s3[n1] = s1[n1];
	for (n2 = 0; n2 < s2l; n1++, n2++)
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
