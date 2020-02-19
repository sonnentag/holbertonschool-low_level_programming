#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: provided
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	begin  = s;
	end    = s;
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
