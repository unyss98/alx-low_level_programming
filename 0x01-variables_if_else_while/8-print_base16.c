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
	{
		putchar('0' + c);
	}

	putchar('\n');
	return (0);
}
