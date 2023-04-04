#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to copy the bytes to
 * @src: memory area to copy the bytes from
 * @n: number of bytes to copy
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
