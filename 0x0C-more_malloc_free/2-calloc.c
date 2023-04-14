#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb:number of elements
 * @size:size of bytes
 *
 * Return : NULL on failure or pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alocation;
	char *fi;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alocation = malloc(size * nmemb);

	if (alocation == NULL)
		return (NULL);

	fi = alocation;

	for (index = 0; index < (size * nmemb); index++)
		fi[index] = '\0';

	return (alocation);
}
