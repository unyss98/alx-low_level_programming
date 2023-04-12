#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns pointer to concatenated string
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1len;
	int i;
	int j;
	int k;

	s1len = 0;
	while (s1[s1len] != '\0')
	{
		s1len++;
	}

	for  (j = 0; s2[j] != '\0'; j++, s1len++)
	{
		s1[s1len] = s2[j];
	}
	s1[s1len] = '\0';

	k = 0;
	while (s1[k] != '\0')
	{
		k++;
	}

	p = malloc(k * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i != '\0'; i++)
		{
			p[i] = s1[i];
		}
		p[i] = '\0';
	}
	return (p);
}
