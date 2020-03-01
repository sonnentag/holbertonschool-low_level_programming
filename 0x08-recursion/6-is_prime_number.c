#include "holberton.h"

/**
 * is_prime_number - determine if prime number is given
 * @n: given number
 * Return: 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (pnum(2, n));
}

/**
 * pnum - helper function to determine if number is prime
 * @i: int to increment through primes until matches or not
 * @n: provided number to test
 * Return: 1 if prime and 0 otherwise
 */
int pnum(int i, int n)
{
	if (n % i == 0 || n < 2)
		return (0);
	else if (i == n - 1)
		return (1);
	else if (n > i)
		return (pnum(i + 1, n));

	return (0);
}


