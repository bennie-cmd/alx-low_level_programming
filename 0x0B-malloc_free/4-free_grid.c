#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This is used to free a two diment array
 * @grid: The variable for two dimentional grid
 * @height: The variable for height dimen of grid
 * Description: This removes  mem from grid
 * Return: 0
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
