#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String to be reversed
 */
void _print_rev_recursion(char *s)
{
	/*checks if the pointed character is NULL*/
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
