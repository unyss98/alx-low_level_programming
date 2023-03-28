#include "main.h"

/**
 *  print_rev - print string in reverse
 *
 * @s: a string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
