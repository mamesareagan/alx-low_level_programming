#include "main.h"
/**
 * _strlen_recursion - Gets lenghh of a string
 * @s:String to be counted
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/*checks if character pointed by s is NULL*/
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
