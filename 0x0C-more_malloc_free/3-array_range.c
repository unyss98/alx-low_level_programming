#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: an integer
 * @max: an integer
 *
 * Return: a pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		j = max - min;
		p = malloc((j + 1) * sizeof(int));
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < j + 1; i++, min++)
		{
			(p[i]) = min;
		}
	}
	return (p);
}
