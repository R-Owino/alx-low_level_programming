#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - gets pointer to 2D array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: 2D array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}
