#include "main.h"

/**
 * _strlen - print length of a string
 *
 * @s: a string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}return (i);
}
