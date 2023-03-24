#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - 'prints alphabet ten times'
 * Return: void
 */

void print_alphabet_x10(void)
{
	int alpha;
	int i;

	i = 0;
	while (i > 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		i++;
	}
	return;
}
