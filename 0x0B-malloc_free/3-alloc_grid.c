#include "main.h"

/**
 * alloc_grid - returns pointer to a 2D arr of int
 * @width: rows
 * @height: columns
 * Return: value 2d array pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	/*if width and height are 0, exit with null*/
	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	/*allocate the grid's row memory*/
	grid = (int **)malloc(sizeof(int *) * height);

	/*if allocation fails, exit with null*/
	if (grid == NULL)
	{
		return (NULL);
	}

	/*assign values to the grid*/
	for (i = 0; i < height; i++)
	{
		/*allocating memory for the column within the grid*/
		grid[i] = (int *)malloc(sizeof(int) * width);

		/*if mem alocation within grid collumns fail, exit with null*/
		if (grid[i] == NULL)
		{
			/*free the alocatied mem on all the previous positions*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
