#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name:name to be printed
 * @f:function pointer
 *
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
