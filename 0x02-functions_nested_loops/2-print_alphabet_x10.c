#include "main.h"

/**
 * print_alphabet_x10 - 'prints alphabet ten times'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 10;
	while (i > 10)
	{
		alpha = 'a';
		while (alpha >= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
