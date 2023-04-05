#include "main.h"
/**
 * _pow_recursion - gets the value of 'x' raised to y
 * @x: number to be raised
 * @y:number of times to raise 'x'
 *
 * Return: if y < 0 -return -1 else power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, --y));
	}
}
