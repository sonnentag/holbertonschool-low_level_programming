#include "holberton.h"

/**
 *
 *
 */
char *_str_cpy(char *dest, char *src)
{

	int x = 0;
        int length = 0;
	char * ret = &dest;
        while (src[length] != '\0')
        {
                length++;
        }
        while (x <= length)
	{
		dest[x] = src[x];
	}

return (ret);
}
