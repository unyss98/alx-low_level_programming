#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d;

	for (c = 0x0; c <= 0x9; c++)
	{
		putchar('0' + c);
	}
		for (d = 0x10; d <= 0xf; d++)
		{
			putchar(d);
		}

	putchar('\n');
	return (0);
}
