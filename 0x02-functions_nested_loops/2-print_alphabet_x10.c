#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - 'prints alphabet ten times'
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;
	alpha = 'a';

	for (i = 0; i > 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		putchar ('\n');
	}
	return;
}
