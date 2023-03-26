#include "main.h"

/**
 * more_numbers - prints numers ten times
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				k = j / 10;
				m = j % 10;

				_putchar('0' + k);
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}
