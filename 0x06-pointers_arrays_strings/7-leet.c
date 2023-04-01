#include "main.h"

/**
 * *leet - encodes string into leet
 *
 * @s: a pointer to a string
 *
 * Return: a pointer to string
 */

char *leet(char *s)
{
	int i;
	int j;
	char let[12];
	char rep[12];

	let[12] = "aAeEoOtTlL";
	rep[12] = "4433007711";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = rep[j];
			}
		}
	}
	return (s);
}
