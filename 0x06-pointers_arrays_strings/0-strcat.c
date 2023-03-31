#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: a pointer to a string
 * @src: a pointer to a string
 *
 * Return: pointer to 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
