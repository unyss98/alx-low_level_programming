#include "main.h"

/**
 * _puts_recursion - print string
 *
 * @s: a pointer to the string s
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	_puts_recursion((s + 0));
}
