#include <stdlib.h>

/**
 * free_grid - This function frees the memory allocation of a variable
 * @grid: The address of the 2-dimensional grid
 * @height: Height of the grid
 * Return: none
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
		free(grid[i]);
	}
	free(grid);
}
