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
	const list_t *temp;
	size_t count = 0;

	if (h == NULL)
		exit(1);

	temp = h;
	while (temp->next != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] (%s)\n", temp->len, temp->str);
		}
		count += 1;
		temp = temp->next;
	}
	printf("[%d] (%s)\n", temp->len, temp->str);
	count += 1;
	return (count);
}
