#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstdigit;
	int seconddigit;

	firstdigit = 0;
	seconddigit = 0;

	for (firstdigit = 0; firstdigit <= 9; firstdigit++)
	{
		putchar(firstdigit);
		for (seconddigit = 0; seconddigit <= 9; seconddigit++)
		{
			if (seconddigit != firstdigit && seconddigit > firstdigit)
			{
				putchar( seconddigit);
			        putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
