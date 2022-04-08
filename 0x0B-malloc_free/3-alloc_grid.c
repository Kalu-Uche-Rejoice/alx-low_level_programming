#include <stdlib.h>
#include "main.h"
/**
 * malloc_free - returns the pointer to a two 
 * dimensional array of integers
 * @width: number of columns in array
 * @height: number of rows in array
 * Return pointer to array
 */
int **alloc_grid(int width, int height);
{
	int  **row;
	int i, j;

	row = malloc(sizeof(int *) * height);
	for ( i = 0; i < height; i++)
	{
		row[i] = malloc(sizeof(int) * width);
		if (row[i] == NULL)
		{
			free(row[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
