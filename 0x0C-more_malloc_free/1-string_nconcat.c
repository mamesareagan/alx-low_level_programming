#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n: size of s2 to be concatenated
 *
 * Return:Null on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int concat_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = ""; /* Set s1 to an empty string */
	}
	if (s2 == NULL)
	{
		s2 = ""; /* Set s2 to an empty string */
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2); /* Set n to s2 length if n is greater */
	}

	/* Calculate the length of the concatenated string */
	concat_len = strlen(s1) + n;

	/* Allocate memory for the concatenated string */
	result = malloc(sizeof(char) * (concat_len + 1));
	if (result == NULL)
	{
		return NULL; /* Return NULL if memory allocation fails */
	}

	/* Copy s1 to the result string */
	strcpy(result, s1);

	/* Concatenate n characters from s2 to the result string */
	strncat(result, s2, n);

	return result;
}
