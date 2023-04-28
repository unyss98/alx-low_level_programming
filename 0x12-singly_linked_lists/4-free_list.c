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
	list_t *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(head->str);
		free(temp);
		temp = next;
	}
}
