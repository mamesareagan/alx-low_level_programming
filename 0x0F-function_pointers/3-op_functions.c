#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a:num 1
 * @b:num 2
 *
 * Return:sum of a and b
 */
int op_add(int a, int b)
{
	return (SUM(a, b));
}
/**
 * op_sub - subtracts two numbers
 * @a:first number
 * @b:second number
 *
 * Return:(a - b)
 */
int op_sub(int a, int b)
{
	return (SUB(a, b));
}
/**
 * op_mul - multiplies two numbers
 * @a:first number
 * @b:second number
 *
 * Return:(a*b)
 */
int op_mul(int a, int b)
{
	return (MUL(a, b));
}
/**
 * op_div - divides two numbers
 * @a:num 1
 * @b:num 2
 *
 * Return:result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (DIV(a, b));
}
/**
 * op_mod - gets remainder of division of two numbers
 * @a:num 1
 * @b:num 2
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (MOD(a, b));
}
