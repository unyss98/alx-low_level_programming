#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns a node of a linked list
 *
 * @head: head node
 * @index: index of node
 *
 * Return: a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
	{
		exit(1);
	}

	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	return (temp);
}
