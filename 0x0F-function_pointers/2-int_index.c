#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *@array:array to be searched
 *@size:number of elements in array
 *cmp:function pinter
 *
 *Return:-1 on failure & if size is less or equal to zero
 *else return index of the first element for which cmp is not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned short int a = 0;

	if ( size <= 0)
		return (-1);
	while (a < size)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
