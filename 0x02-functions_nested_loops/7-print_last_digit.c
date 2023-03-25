#include "main.h"

/**
 * print_last_digit - 'prints last digit of a number'
 *@i: input number
 * Return: 0
 */

int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (a < 0)
	{
		_putchar(a + '0');
		return (a * -1);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}



