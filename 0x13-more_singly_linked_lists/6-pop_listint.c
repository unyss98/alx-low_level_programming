#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node of a list
 *
 * @head: pointer to head node
 *
 * Return: data in head node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
