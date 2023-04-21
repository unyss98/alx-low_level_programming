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
	int j;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		j = va_arg(list, int);
		if (separator != NULL)
		{
			printf("%d%s ", j, separator);
		}
		else
		{
			printf("%d ", j);
		}
	}
	printf("%d", va_arg(list, int));
	va_end(list);
	printf("\n");
}
