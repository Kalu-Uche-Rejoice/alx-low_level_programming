#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2-d grid previously created
 * @grid: pointer to grid
 * @height: number of rows in grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++;)
	{
		free(grid[i]);
	}
	free(grid);
}

