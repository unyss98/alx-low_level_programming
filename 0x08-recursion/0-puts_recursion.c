#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @s: a pointer to string s
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	if (s[i] == '\0')
	{
		_putchar('\n');
	}
}
