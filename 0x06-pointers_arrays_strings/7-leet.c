#include "main.h"

/**
 * *leet - encodes string into leet
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: a pointer to a string
 *
 * Return: a pointer to string
 */

char *leet(char *s)
{
	int i;
	int j;
	char let[];
	char rep[];

	let[] = "aAeEoOtTlL";
	rep[] = "4433007711";

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
