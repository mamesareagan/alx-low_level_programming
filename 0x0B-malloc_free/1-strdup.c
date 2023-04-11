#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup-allocates memory and copies string to it
 * @str: string too be copied
 *
 * Return:NULL if str is NULL or no aallocation else pointer
 */
char *_strdup(char *str)
{
	char *rst;
	int a = 1;

	/*checks if str is NULL*/
	if (str == NULL)
	{
		/*If true*/
		return (NULL);
	}
	/*Finding the length of argument*/
	a += strlen(str);
	/*allocation of dynamic memory to rst*/
	rst = (char *) malloc(a * sizeof(char));
	/*checks if memory is allocated*/
	if (rst == NULL)
	{
		/*memory never allocated*/
		return (NULL);
	}
	/*copying the string from str to rst*/
	strcpy(rst, str);
	return (rst);
}
