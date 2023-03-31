#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
