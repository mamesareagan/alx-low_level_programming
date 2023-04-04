#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to be checked
 * @accept: string containing accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
