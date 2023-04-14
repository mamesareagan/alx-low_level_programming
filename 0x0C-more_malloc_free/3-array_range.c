#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min:starting number
 * @max:end number
 *
 * Return:NULL on failure
 */
int *array_range(int min, int max)
{
	int *a, c, b, count = 0;
	/*checks if min is greater*/
	if (min > max)
	{
		return (NULL);/*if true*/
	}
	/*finding number of integers present ,,min and max included*/
	for (b = min; b <= max; b++)
	{
		count++;
	}
	/*memory for available numbers*/
	a = malloc(sizeof(int) * count);
	if (a == NULL)
	{
		return (NULL);
	}
	/*loop through memory assigning values from min to max*/
	for (c = 0; c < count; c++)
	{
		a[c] = min + c;
	}
	return (a);
}
