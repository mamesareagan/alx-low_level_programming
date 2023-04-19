#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array:array
 * @size:size of array
 * @action:function pointer
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned short int a = 0;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
