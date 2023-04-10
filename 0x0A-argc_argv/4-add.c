#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: number of parameters
 * @argv: parameter
 *
 * Return: 0 if success, 1 if not
 */

int main(int argc, char *argv[])
{
	int a;
	int sum;
	int c;

	sum = 0;
	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			c = atoi(argv[a]);
			if (c == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += c;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
