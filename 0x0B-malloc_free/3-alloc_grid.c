#include "main.h"

/**
 * alloc_grid - Allocates space to a 2D array of integers and initialze it to 0
 * @width: Number of elements in each row
 * @height: Number of rows
 *
 * Return: pointer to the created 2D-array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (!g)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (!g[i])
		{
			if (i == 0)
				free(g);
			if (i > 0)
			{
				for (j = i; j >= 0; j--)
					free(g[j]);
				free(g);
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
