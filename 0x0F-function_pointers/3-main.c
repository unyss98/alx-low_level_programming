#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: number of arguments passed
 * @argv: argument
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	int (*ptAll[])(int a, int b) = {op_add, op_sub, op_mul, op_div, op_mod};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
            strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 &&
            strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3] == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	i = (*argv[2] == '+') ? 0 :
		(*argv[2] == '-') ? 1 :
		(*argv[2] == '*') ? 2 :
		(*argv[2] == '/') ? 3 : 4;

	result = ptAll[i](atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
