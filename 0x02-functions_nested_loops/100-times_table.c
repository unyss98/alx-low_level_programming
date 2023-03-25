#include "main.h"

/**
 * print_times_table - prints times table
 *
 * @n: input number
 */

void print_times_table(int n)
{
	int i;
	int g;

	for (i = 0; i <= n; i++)
	{
		for (n = 0; n <= 15; n++)
		{
			g = i * n;
			_putchar(g);
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}

}
