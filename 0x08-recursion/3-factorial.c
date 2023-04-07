#include "main.h"

/**
 * factorial - print factorial of input number
 *
 * @n: input number
 *
 * Return: -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
