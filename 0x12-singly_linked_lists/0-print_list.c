#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *holder;
	size_t count = 0;

	if (h == NULL)
		return(0);

	holder = h;
	while (holder != NULL)
	{
		if (holder->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] (%s)\n", holder->len, holder->str);
		}
		count++;
		holder = holder->next;
	}
	return (count);
}
