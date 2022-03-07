#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: .
 * @height: .
 * Return: NULL on failure or If width or height is 0 or negative
 * otherwise returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{

	int **alloc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int) * height);

	if (alloc == NULL)
	{
		free(alloc);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);
		if (alloc[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(alloc[i]);
			free(alloc);
			return (NULL);

		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			alloc[i][j] = 0;
		}
	}

	return (alloc);
}
