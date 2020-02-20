#include "holberton.h"

/**
 * _atoi - convert string to integer it contains
 * @s: provided string
 * Return: the integer it contains
 */
int _atoi(char *s)
{
	int c = 0, b = 0, neg = 1;
	unsigned int ret = 0;

	while (s[c] != '\0')
	{
		if (b == 0 && s[c] == '-')
		{
			neg *= -1;
		}
		else if (b == 0 && s[c] >= '0' && s[c] <= '9')
		{	
			ret = (ret * 10) + (s[c] + '0');
		}
		else if (ret > 0)
		{
			b = 1;
			break;
		}
	c++;
	}

	return (ret * neg);
}
