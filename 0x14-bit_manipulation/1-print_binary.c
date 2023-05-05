#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 *
 * @n: a number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar('0' + (n & 1));
}
