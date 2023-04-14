#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: number of bytes
 * Return: a pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1len, s2len, i, j;

	s1len = 0;
	if (s1 != NULL)
	{
		while (s1[s1len] != '\0')
		{
			s1len++;
		}
	}
	s2len = 0;
	if (s2 != NULL)
	{
		while (s2[s2len] != '\0')
		{
			s2len++;
		}
	}
	if (n >= s2len)
	{
		n = s2len;
	}
	p = malloc((s1len + n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		{
			p[i] = s2[j];
		}
		p[i] = '\0';
	}
	return (p);
}
