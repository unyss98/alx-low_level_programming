#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 *
 * @a: a pointer to an arrayof integers
 * @size: size of array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d\n, %d\n", sum1, sum2);
}
