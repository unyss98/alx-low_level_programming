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

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s ", va_arg(list, int), separator);
		}
		else
		{
			printf("%d ", va_arg(list, int));
		}
	}
	printf("%d", va_arg(list, int));
	va_end(list);
	printf("\n");
}
