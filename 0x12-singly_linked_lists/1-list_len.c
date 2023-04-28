#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h : pointer to a list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		temp = h;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}
	return (count);
}
