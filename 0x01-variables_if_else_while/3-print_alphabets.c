#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (ALPHA = 'A'; ALPHA <= 'A'; ALPHA++)
	{
		putchar(ALPHA);
	}

	putchar('\n');
	return (0);
}
