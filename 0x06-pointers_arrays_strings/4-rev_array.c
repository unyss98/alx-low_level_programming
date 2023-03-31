#include "main.h"

/**
 * reverse_array - reverse elements of an array
 *
 * @a: an array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int t;
	int i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		t = a[i];
		a[i++] = a[n];
		a[n--] = t;
	}
}
