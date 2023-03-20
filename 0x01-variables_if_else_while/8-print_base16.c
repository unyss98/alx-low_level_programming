#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;

	for (c = 0x0; c <= 0xf; c++)
		if (c <= 0x9)
	{
		putchar('0' + c);
	}
		else
		{
			for (i = 0xa; i <= 0xf; i++)
				if (i == 'c')
				{
					putchar(i + '0'), %i;
					
				}
		}

	putchar('\n');
	return (0);
}
