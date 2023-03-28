#include" main.h"

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
	while (s[i])
	{
		i++;
	while(s--)
		_putchar(s[i]);
	}
	_putchar('\n');
}
