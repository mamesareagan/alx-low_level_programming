#include "main.h"
/**
 * is_divisible - Checks if a number is divisible.
 * @n: The number to be checked.
 * @v: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int divisible(int n, int v)
{
	if (n % v == 0)
		return (0);

	if (v == n / 2)
		return (1);

	return (divisible(n, v + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int v = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, v));
}
