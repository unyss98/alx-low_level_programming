#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to an array
 * @size: number of elements in array
 * @cmp: pointer to function
 *
 * Return: index of first non-integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		result = cmp(array[i]);
	if (result 
