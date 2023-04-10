#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: number of parameters to be passed
 * @argv: parameter to be passed
 *
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	return (0);
}
