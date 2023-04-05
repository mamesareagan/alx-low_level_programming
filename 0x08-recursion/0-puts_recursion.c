#include <string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by new line
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')/* || *(s + 1) == '\0')*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);/*print first *s*/
	++s;/*move to next address of s*/
	_puts_recursion(s);/*recalled function*/
}
