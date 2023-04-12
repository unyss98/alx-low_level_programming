#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 *
 * @size: an unsigned integer
 *
 * @c: a pointer to character c
 *
 * Return: pointer to C or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
