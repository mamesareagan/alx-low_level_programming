#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	size_t step;

	if (array == NULL)
		return (NULL);

	step = sqrt(size);
	
