#include "holberton.h"

/**
 * _strstr - find substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to substring in string or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *first;
	char *p;
	char *q;

	for(first = haystack; *first != '\0'; first++ ) 
	{
		p = needle;
		q = first;
		while ( *p != '\0' && *q != '\0' && *p == *q ) 
		{
			 p++;
			 q++;
		}
		if( *p == '\0' )
			return first;
	}
	return (char)0;
}
