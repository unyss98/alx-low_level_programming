#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 * @n: input number
 *
 */

void print_to_98(int n)
{
	int k;

	if (n > 98)
		for (k = n; k >= 98; k--)
		{
			printf("%d", k);
			if (k != 98)
			{
				printf(", ");
			}
		}

	else if (n < 98)
		for (k = n; k <= 98; k++)
		{
			printf("%d", k);
			if (k != 98)
			{
				printf(", ");
			}
		}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
