#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-creates a two-d array of integers
 * @width:colums
 * @height:rows
 *
 * Return:null on failure
 */
int **alloc_grid(int width, int height)
{
	int **p, j;
	int i;
	/*stores base order of rows*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **) malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		/*create height rows of width elements*/
		p[j] = (int *) malloc(width * sizeof(int));
		if (p[j] == NULL)
			return (NULL);
		/*assigns each grid 0*/
		for (i = 0; i < width; i++)
		{
			p[j][i] = 0;
		}
	}
	return (p);
}


