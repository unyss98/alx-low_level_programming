#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (a > 9)
			{
				putchar('0' + a / 10);
				putchar('0' + a % 10);
				putchar(' ');
			}
			else
			{
				putchar('0' + a);
				putchar(' ');
			}
		}
	}
	return (0);
}
