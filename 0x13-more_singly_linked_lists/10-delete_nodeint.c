#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at an index position
 *
 * @head: pointer to head node
 * @index: index of node to be deleted
 *
 * Return: 1 On success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *former;
	listint_t *current;

	if (*head == NULL)
		return (-1);

	current = *head;
	former = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		former = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (former == NULL)
		*head = current->next;
	else
		former->next = current->next;
	free(current);
	return (1);
}
