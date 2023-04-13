#include "main.h"
#include <stdlib.h>
/**
 * str_concat - returns pointer to concatenated string
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1len, s2len, i, j;

	s1len = 0;
	while (s1len != '\0')
	{
		s1len++;
	}
	if (s1 == NULL)
	{
		s1len = 0;
	}
	s2len = 0;
	while (s2len != '\0')
	{
		s2len++;
	}
	if (s2 == NULL)
	{
		s2len = 0;
	}
	p = malloc((s1len + s2len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		p = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
