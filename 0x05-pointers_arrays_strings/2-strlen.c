#include "main.h"
#include <stdio.h> 

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

	for (i = 0; s[i] != '\0'; ++i)
	{
		printf("%d\n", i);
	}
	return (0);
}
