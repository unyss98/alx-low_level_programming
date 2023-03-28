#include "main.h"

/*
 * _puts - prints a string to stdout
 *
 * @str: a string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar( i);
	}
	_putchar('\n');
}
