#include "main.h"

/**
 * flip_bits - returns number of bits to flip between numbers
 *
 * @n: uunput number
 * @m: input number
 *
 * Return: count of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;
	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
