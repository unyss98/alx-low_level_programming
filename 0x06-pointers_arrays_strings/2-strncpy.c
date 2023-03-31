#include "main.h"

/**
 * *_strncpy - copy string
 *
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: an integer
 *
 * Return: pointer to 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
