#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * @c: character in ASCII code
 *
 * Return: 1, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
