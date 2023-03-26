#include "main.h"

/**
 * print_to_98 - prints natural numbers
 *
 */

void print_to_98(int n)
{
	int k;
	int l;
	
	if (n == 98);
	{
		_putchar(0 + 'n');
		_putchar('\n')
	}
	else
	{
		if (n < 98)
		{
			for (k = n; k <= 98; k++)
			{
				if (k == n)
				{
					_putchar('0' + k);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + k);
				}
			}
			_putchar('\n');
		}
		if (n > 98)
		{
			for (l = n; l >= 98; l--)
			{
				if (l == n)
				{
					_putchar('0' + l);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + k);
				}
			}
			_putchar('\n');
		}
	}
}
