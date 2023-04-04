#include "main.h"

/**
 * *_strchr - locate a character in a string
 *
 * @s: a pointer to string s
 * @c: character to be located
 *
 * Return: pointer to character if found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
