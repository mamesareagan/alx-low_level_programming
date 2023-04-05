#include "main.h"
/**
 * factorial - prins the factorial of a give number
 * @n: number to be factorised
 *
 * Return: if n < 0-return -1 otherwise return the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n*factorial(n-1));
	}
	_putchar('\n');
}
