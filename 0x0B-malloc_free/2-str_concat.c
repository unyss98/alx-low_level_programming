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
	int s1len = 0, s2len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = " ";

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0')
		s2len++;

	p = malloc((s1len + s2len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
		
		for (j = 0; s2[j] != '\0'; j++, i++)
			p[i] = s2[j];
	}

	p[i] = '\0';

	return (p);
}
