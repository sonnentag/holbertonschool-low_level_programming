#include <stdio.h>
#include <string.h>

/**
 * main - function using puts to output assigned string of text
 * Return: 0
 */
int main(void)
	{
/* let's declare our string char variable. */
	char str[51];

/* let's copy the string. */
	strcpy(str, "\"Programming is like building a multilingual puzzle");
/* put it to stdout */
	puts(str);
/* and return 0 */
	return (0);
}
