#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two-dimensional array of integers
 * @grid: pointer to the 2D array
 * @height: rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* Free rows*/
	}
	free(grid);/*Free the array of pointers to rows*/
}
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
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		/*create height rows of width elements*/
		p[j] = (int *) malloc(width * sizeof(int));
		if (p[j] == NULL)
		{
			for (i = 0; i < j; i++)
			{
				free(p[i]); /* Free previously allocated rows*/
			}
			free(p); /* Free the array of pointers to rows*/
			free_grid(p, j);
			return (NULL);
		}
		/*assigns each grid 0*/
		for (i = 0; i < width; i++)
		{
			p[j][i] = 0;
		}
	}
	return (p);
}
