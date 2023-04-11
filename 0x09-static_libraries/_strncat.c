#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: number of bytes for src
 *
 * Return: pointer to 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != 0; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
