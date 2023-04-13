#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 *
 * @width: an array of integers
 * @height: an array of integers
 *
 * Return: pointer to a two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc((width * height) * sizeof(int));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < width; i++)
			{
				for (j = 0; j < height; j++)
				{
					p[i][j] = 0;
				}
			}
		}
	}
	return (p);
}
