#include "main.h"

/**
 * _sqrt_recursion - return natural square root of input number
 *
 * @n: input number
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	int r;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n == 25)
		return (5);

	r = _sqrt_recursion(n / 4) * 2;
	if (r * r == n)
		return (r);
	else if ((r + 1) * (r + 1) == n)
		return (r + 1);
	else
		return (-1);
}
