#include <stdio.h>
#include <string.h>

/**
 * main - function using printf to output assigned string of text
 * Return: 0
 */
int main(void)
	{
/* let's declare our string char variable. */
	char str[51];

/* let's copy the string. */
	strcpy(str, "with proper grammar, but the outcome is a piece of art,");
/* print it to stdout */
	printf("%s\n", str);
/* and return 0 */
	return (0);
}
