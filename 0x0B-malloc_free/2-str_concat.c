#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat-concatenates two strings
 * @s1:string one
 * @s2:string two
 *
 * Return:NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int a;

	/*checks if s1 contains nothing*/
	if (s1 == NULL)
	{
		/*treating it as an empty string*/
		s1 = "";
	}
	/*checks if s2 contains nothing*/
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Assign length of both strings to a*/
	a = strlen(s1) + 1 + strlen(s2);
	/*allocation of space dynamically*/
	p = (char *) malloc(a * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}
