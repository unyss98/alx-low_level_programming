#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - 'prints alphabet'
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}

	_putchar('\n');
}
