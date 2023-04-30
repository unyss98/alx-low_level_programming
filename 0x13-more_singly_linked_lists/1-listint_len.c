#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 *
 * @h: head pointer
 *
 * Return: number of elemenst in the list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current;

	if (h == NULL)
	{
		return (count);
	}
	else
	{
		current = h;
		while (current != NULL)
		{
			current = current->next;
			count++;
		}
	}
	return (count);
}
