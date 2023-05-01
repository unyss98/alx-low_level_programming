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
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
	{
		exit(1);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (i < idx - 1 || temp ==  NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}



