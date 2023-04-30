#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a list
 *
 * @head: head pointer
 * @n: member variable
 *
 * Return: a pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
		exit(1);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
