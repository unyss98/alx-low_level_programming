#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: pointer point to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int count;
	int j;
	int split;
	char t;

	for (count = 0; count != '\0'; count++)
		;
	j = 0;
	split = count / 2;
	while (split--)
	{
		t = s[count - j - 1];
		s[count - j - 1] = s[j];
		s[j] = t;
	}
}


