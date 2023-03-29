#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: a pointer to the string str
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int z;

	i = 0;
	while (str[i] != '\0')
		i++;

	z = i / 2;
	if (i % 2 == 1)
		z++;

	while (z < i)
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
