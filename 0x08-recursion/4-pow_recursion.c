#include "main.h"

/**
 * _pow_recursion - return the value of x to the power y
 *
 * @x: an integer
 * @y: an integer
 *
 * Return: value of x to the power y, if y is 0 return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
