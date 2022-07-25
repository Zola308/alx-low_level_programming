#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of the grid
 *
 * @height: the height of the grid
 *
 * Return: The function should return NULL on failure
 *
 * If width or height is 0 or negative, return NULL
 *
 * return a pointer to a 2 dimensional array of integers
 *
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (i--; i >= 0; i--)
free(grid[i]);
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}

