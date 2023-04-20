#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: number of parameters
 *
 * Return: sum of parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
