#include "main.h"

/**
 * *_strpbrk - search string for any of a set of bytes
 *
 * @s: string to check
 * @accept: control string
 *
 * Return: pointer to byte in s if match found, NULL if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
