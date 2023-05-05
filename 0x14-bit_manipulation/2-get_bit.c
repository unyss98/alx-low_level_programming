#include "main.h"

/**
 * get_bit - returns value of bit at an index
 *
 * @n: a number
 * @index: index whose value to return
 *
 * Return: value at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
		return ((n >>= index) & 1);
}
