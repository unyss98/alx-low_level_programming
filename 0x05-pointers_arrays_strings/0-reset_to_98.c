#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - reset the value of an integer to 98
 *
 * @n: a pointer to the integer we want to set to 98
 *
 * Return: nothing
 */

void reset_to_98(int *n)
{
	/* value of n */
	_putchar('n');
	/* address of n */
	printf("%p", &n);
	*n = 98;
}
