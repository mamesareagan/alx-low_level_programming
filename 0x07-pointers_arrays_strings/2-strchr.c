#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
 **/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return ('\0');
}
