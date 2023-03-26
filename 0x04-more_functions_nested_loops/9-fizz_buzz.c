#include <stdio.h>
/*
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
			printf(" ");
		}
		else
		{
			if (a > 9)
			{
				putchar('0' + a / 10);
				putchar('0' + a % 10);
			}
			else
			{
				putchar('0' + a);
			}
			putchar(' ');
		}
	}
	return (0);
}
