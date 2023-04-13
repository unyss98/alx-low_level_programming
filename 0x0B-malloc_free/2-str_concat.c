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
	int s1len;
	int s2len;
	int i;
	int j;

	s1len = 0;
	s2len = 0;
	if (s1 != NULL)
	{
		while (s1[s1len] != '\0')
		{
			s1len++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[s2len] != '\0')
		{
			s2len++;
		}
	}
	p = malloc((s1len + s2len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			p[i] = s2[i];
		}
		p[i] = '\0';
	}
	if (s2 != NULL && s1 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			p[i + j] = s2[j];
		}
	}
	p[i + j] = '\0';
	else
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			p[j] = s1[j];
		}
		p[j] = '\0';
	return (p);
}                                                                                                                           													    
