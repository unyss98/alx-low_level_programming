#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list
 *
 * @head: pointer to first node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
