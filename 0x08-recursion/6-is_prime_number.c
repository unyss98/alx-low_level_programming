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
	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}

	is_prime_number(n / 2);
	if (n % 2 == 0)
		return (0);
	is_prime_number(n / 3);
	if (n % 3 == 0)
		return (0);
	is_prime_number(n / 5);
	if (n % 5 == 0)
		return (0);
	is_prime_number(n / 7);
	if (n % 7 == 0)
		return (0);
	else
		return (1);
}
