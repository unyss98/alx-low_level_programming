#include "main.h"

/**
 * print_diagonal - prints a line
 *
 * @n: input number
 */

void print_diagonal(int n)
{
	int m;
	int q;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			for (q = 1; q <= n; q++)
			{
				if (m == q)
				{
					_putchar(92);
				}
				else
				{
					if (m > q)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
