#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
