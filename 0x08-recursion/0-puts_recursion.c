#include <string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by new line
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	/*print first address of s*/
	_putchar(*s);
	/*Ending the recursion*/
	if (strlen(s) == 0 || *s == '\0' || *(s + 1) == '\0')
	{
		_putchar('\n');
		return;
	}
	++s;/*move to next address of s*/
	_puts_recursion(s);/*recalled function*/
}
