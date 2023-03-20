#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		putchar('0' + first_digit);
		if (first_digit != second_digit)
		{
			putchar('0' + second_digit);
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
