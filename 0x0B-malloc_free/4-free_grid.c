#include "main.h"

/**
 * free_grid - Entry point
 * @grid: grid to clear
 * @height: The number of rows
 * Return:void,  cleared grid
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	if (grid == 0)
	{
		return;
	}


	for (i = 0; i < height;  i++)
	{
		free(grid[i]);
	}
	free(grid);
}
