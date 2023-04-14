#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: elements
 * @size: number of bytes per element
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(nmemb * size);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(p, 0, size);
	}
	return (p);
}
