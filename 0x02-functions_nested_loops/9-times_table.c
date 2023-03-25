#include "main.h"

/**
 * times_table - prints times table
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k >= 0)
			{
				if (k < 10)
				{
					_putchar('0' + k);
					_putchar(',');
					if (k++ >= 10)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
