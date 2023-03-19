#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 0x0; c <= 0xf; c++)
		if (c <= 0x9)
	{
		putchar('0' + c);
	}
		else
			while (c >= 0x10)
		{
			putchar(c);
			c++;
		}

	putchar('\n');
	return (0);
}
