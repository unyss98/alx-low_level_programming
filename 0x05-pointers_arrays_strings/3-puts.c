#include "main.h"

/**
 * _puts - prints string to stdout
 *
 * @str: a string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; ++i)
	{
		c = i;
		_putchar(c);
	}
	_putchar('\n');
}
