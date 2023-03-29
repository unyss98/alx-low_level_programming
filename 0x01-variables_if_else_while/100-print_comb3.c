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
		for (seconddigit = 0; seconddigit <= 9; seconddigit++)
		{
			if ((seconddigit != firstdigit) && (seconddigit > firstdigit))
			{
				putchar('0' + firstdigit);
				putchar('0' + seconddigit);
				if ((firstdigit != 8) || (seconddigit != 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
