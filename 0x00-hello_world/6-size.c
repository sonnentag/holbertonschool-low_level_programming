#include <stdio.h>

/**
 * main - function using prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(int argc, char* argv)
	{
/* let's print the assigned values */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
/* and return 0 */
	return (0);
}
