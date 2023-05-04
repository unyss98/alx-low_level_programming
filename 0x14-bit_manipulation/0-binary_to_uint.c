#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to integer value
 *
 * @b: pointer to a string of binary characters
 *
 * Return: unsigned integer value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len, i;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = 0; i < len; i++)
	{
		ui <<= 1;
		if (b[i] == '1')
			ui |= 1;
	}
	return (ui);
}
