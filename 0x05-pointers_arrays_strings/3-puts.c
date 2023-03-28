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
	char c;
	int i;

	for (c = str(0); c != '\0'; c++)
	{
	
		_putchar(c);
	}
	_putchar('\n');
}
