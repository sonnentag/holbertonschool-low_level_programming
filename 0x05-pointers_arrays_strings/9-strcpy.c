#include "holberton.h"

/**
 *
 *
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
