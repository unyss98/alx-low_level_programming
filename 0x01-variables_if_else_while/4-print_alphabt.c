#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'd'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'e'; ('q' != alpha <= 'z'); alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
