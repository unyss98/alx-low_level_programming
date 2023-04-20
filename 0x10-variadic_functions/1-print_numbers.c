#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: pointer to string to separate numbers
 * @n: number of integers passed to function
 *
 * Return: nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int j;

	if (separator == NULL)
		exit(1);

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		j = va_arg(list, int);
		printf("%d%s ", j, separator);
	}
	printf("%d", va_arg(list, int));
	va_end(list);
	printf("\n");
}
