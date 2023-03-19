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
			i = 0x10;
			while (i <= 0xf)
		{
			putchar('i');
			i++;
		}

	putchar('\n');
	return (0);
}
