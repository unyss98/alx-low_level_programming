#include "main.h"

/**
 * *cap_string - capitalise all words of a string
 *
 * @s: a pointer to a string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||  s[i] == ',' || s[i] == ';'
			       	|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] 
				== '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			++i;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
