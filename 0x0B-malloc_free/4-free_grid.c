#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
*
* @grid: grid is int
* @height: height is int
* Description: 'frees a 2 dimensional grid'
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
