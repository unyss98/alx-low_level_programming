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
	int s2len;
	int i;
	int j;

	if (s1 != NULL)
	{
		s1len = 0;
		while (s1[s1len] != '\0')
		{
			s1len++;
		}
	}

	if (s2 != NULL)
	{
		s2len = 0;
		while (s2[s2len] != '\0')
		{
			s2len++;
		}
	}

	p = malloc((s1len + s2len) * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 != NULL)
		{
			for (i = 0; i < s1len; i++)
			{
				p[i] = s1[i];
			}
		}
		if (s2!= NULL)
		{
			for (j = 0; j < s2len; j++)
			{
				p[i + j] = s2[j];
			}
			p[i + j] = '\0';
		}
	}
	return (p);
}
