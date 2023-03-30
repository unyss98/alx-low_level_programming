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

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
		for (j = 0; src[j] <= '\0'; j++)
		{
			_putchar(src[j]);
		}
	}
	return (dest);
}
