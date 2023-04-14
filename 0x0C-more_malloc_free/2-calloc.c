#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb:number of elements
 * @size:size of bytes
 *
 * Return : NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *pq;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	pq = (unsigned char *)p;
	for (a = 0; a < nmemb; a++)
	{
		pq[a] = 0;
	}
	return (p);
}
