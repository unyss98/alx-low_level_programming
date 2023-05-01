#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at a given idx index in a list
 *
 * @head: pointer to head node
 * @idx: index to insert at
 * @n: integer
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	current = *head;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
	}
	for (i = 0; current != NULL && i < idx; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
