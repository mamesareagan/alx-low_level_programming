#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: values in our array
 * @c:character to fill our arrray
 *
 * Return: NULL if size == 0 or no  array is created else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int b;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *) malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	return (a);
}
