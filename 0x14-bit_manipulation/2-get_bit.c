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
	unsigned int nd;
	unsigned long int temp;

	nd = 0, temp = n;
	while (temp != 0)
	{
		temp /= 2;
		nd++;
	}

	if (index >= nd)
	{
		return (-1);
	}
	else
	{
		n >>= index;
	}
	return (n & 1);
}
