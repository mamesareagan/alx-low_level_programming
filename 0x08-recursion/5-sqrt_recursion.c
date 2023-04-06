#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: int
 **/
int _sqrt_recursion(int n)
{
	int t;

	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (n < 0)
	{
		return (-1);
	}
	t = _sqrt_recursion(n / 4) * 2;
	if (t * t <= n && (t + 1) * (t + 1) > n)
	{
		return (t);
	}
	else
	{
		return (t + 1);
	}
}
