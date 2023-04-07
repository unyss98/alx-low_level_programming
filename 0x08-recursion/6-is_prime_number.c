#include "main.h"

/**
 * is_prime_number - return 1 if input integer is a prime number
 *
 * @n: input integer
 *
 * Return: 1 if input integer is a prime number, 0 otherwise
 *
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if ((n % i == 0) && (i != n || i != 1))
		return (0);
	else
		return (1);
}
