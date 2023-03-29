#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 *
 * @a: a pointer to the array a
 * @n: number of elements in array to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1));
		{
			printf(", ");
		}
	}
	putchar('\n');
}
