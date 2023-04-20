#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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
	int k;

	if (separator == NULL)
		return;

	va_start(list, n);
	k = va_arg(list, int);
	printf("%d", k);

	for (i = 0; i < n; i++)
	{
		printf("%s %d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
