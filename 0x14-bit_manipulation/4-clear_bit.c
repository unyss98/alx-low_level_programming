#include "main.h"

/**
 * clear_bit - set value of bit at index to 0
 *
 * @n: pointer to number
 * @index: index whose value should be set to 0
 *
 * Return: 1 on success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(mask << index);
	return (1);
}
