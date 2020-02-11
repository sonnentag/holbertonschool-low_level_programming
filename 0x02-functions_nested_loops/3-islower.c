#include "holberton.h"

/**
* _islower - check for lowercase character
* @c: provided
* Return: 1 for lower, 0 for upper
*/
int _islower(int c)
	{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
