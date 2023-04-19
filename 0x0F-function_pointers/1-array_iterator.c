#include "function_pointers.h"

/**
 * array_iterator - execute function passed as argument onelements of array
 *
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to function to be passed as argument
 *
 * Return: nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
