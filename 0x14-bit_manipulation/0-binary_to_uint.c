#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary string
 * Return: result in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0, result = 0;

	if (b)
	{
		while (b[c] != '\0')
		{
			if (b[c] != '0' && b[c] != '1')
				return (0);
			if (b[c] == '1')
				result++;
			if (b[c + 1] != '\0')
				result = result << 1;
			c++;
		}
	}

	return (result);
}
