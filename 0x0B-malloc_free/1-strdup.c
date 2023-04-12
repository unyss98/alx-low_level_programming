#include "main.h"
#include <stdlib.h>


/**
 * _strdup - returns a pointer which contains a copy of a string
 *
 * @str: pointer to a string
 *
 * Return: a pointer to a copy of str
 */

char *_strdup(char *str)
{
	char *p;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = 0;
		while (str[len] != '\0')
		{
			len++;
		}

		p = malloc(len * sizeof(char) + 1);
		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; str[i] != '\0'; i++)
		{
			p[i] = str[i];
		}
		p[i] = '\0';
	}
	return (p);
}
