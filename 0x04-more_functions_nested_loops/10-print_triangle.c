#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: input number (size of triangle)
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y >= 1; y--)
			{
				if ((x == y) || (x > y))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
