#include "main.h"

/**
 * set_bit - set value of a bit to 1 at given index
 *
 * @n: pointer to number
 * @index: index whose value is to be set to 1
 *
 * Return: 1 on success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (mask << index);
	return (1);
}
