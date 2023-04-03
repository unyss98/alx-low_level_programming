#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 *
 * @s: a pointer to a memory area
 * @b: constant byte
 * @n: an unsigned integer
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
