#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @src: a pointer to memory area src
 * @dest: a pointer to memory area dest
 * @n: an unsigned integer
 *
 * Return: a ppinter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
