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

    free(grid); /* Free the array of pointers to rows*/
}
