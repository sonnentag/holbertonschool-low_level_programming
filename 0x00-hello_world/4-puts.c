#include <stdio.h>
#include <string.h>

int main(void)
	{
/* let's declare our string char variable. */
	char str[51];

/* let's copy the string. */
	strcpy(str, "\"Programming is like building a multilingual puzzle");
/* put it to stdout */
	puts(str);
/* and return 0 if we got this far. */
	return (0);
}
