#include "main.h"

/**
 * _islower - 'checks for lowercase letters'
 * @c: character in ASCII code
 * Return: 1 (Success), otherwise 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
