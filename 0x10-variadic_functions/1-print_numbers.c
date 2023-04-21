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
	int a;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(list, int);
		printf("%d", a);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
