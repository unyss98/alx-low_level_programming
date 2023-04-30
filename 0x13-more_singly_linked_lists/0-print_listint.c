#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list
 *
 * @h: head pointer
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
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
			printf("%d\n", current->n);
			count++;
			current = current->next;
		}
	}
	return (count);
}
