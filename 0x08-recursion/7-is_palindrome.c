#include "holberton.h"

/**
 * is_palindrome - test if string is a palindrome
 * @s: pointer to provided string
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome(s, 0, len - 1));
}

/**
 * palindrome - helper function to test if string is a palindrome
 * @s: pointer to provided string
 * @incr: int to increment from beginning of string
 * @len: length of string to decrement and compare to incr
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int palindrome(char *s, int incr, int len)
{
	if (len <= incr)
		return (1);
	if (s[len] != s[incr])
		return (0);
	if (s[len] == s[incr])
		return (palindrome(s, ++incr, --len));

	return (0);
}

/**
 * _strlen_recursion - return length of string using recursion
 * @s: string elements
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == (char)0)
		return (0);

	n = 1 + _strlen_recursion(s + 1);

	return (n);
}
