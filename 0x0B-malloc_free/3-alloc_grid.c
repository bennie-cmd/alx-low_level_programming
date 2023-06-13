#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This finction is used to make a grid
 * @width: This is the width input from user
 * @height: This is the height input from user
 * Return: pointer to
 */
int **alloc_grid(int width, int height)
{
int **mee;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int) * width);

if (mee[x] == NULL)
{
for (; x >= 0; x--)
free(mee[x]);

free(mee);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
mee[x][y] = 0;
}

return (mee);
}
