#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the beginning of a list
 *
 * @head: head pointer
 * @n: a member variable
 *
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
		exit(1);
	}

	if (*head == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
