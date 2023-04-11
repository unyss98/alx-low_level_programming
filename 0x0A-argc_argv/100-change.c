#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: number of parameters
 * @argv: parameter
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int m;
	int c[5];
	int cc;
	int change;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		if (i < 0)
		{
			printf("0\n");
		}
		else
		{
			c[5] = {25, 10, 5, 2, 1}
			cc = sizeof(c) / sizeof(c[0]);
			change = 0;
			for (i = 0; i < cc && m > 0; i++)
			{
				while (m >= c[i])
				{
					m -= c[i];
					change++;
				}
			}
			printf("%d\n", change);
		}
	}
	return (0);
}
