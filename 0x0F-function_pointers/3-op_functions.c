#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2nd number from first
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 1st number by 2nd
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculate modulus of 2nd number into 1st
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
