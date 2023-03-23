#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * return: Always 0.
 */
void print_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
