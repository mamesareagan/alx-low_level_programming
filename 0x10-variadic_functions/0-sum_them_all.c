#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 return 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int a, sum = 0;

	va_start(s, n);

	for (a = 0; a < n; a++)
		sum += va_arg(s, int);

	va_end(s);

	return (sum);
}
