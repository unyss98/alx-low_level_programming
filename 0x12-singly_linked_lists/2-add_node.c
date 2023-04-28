#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list
 *
 * @head: pointer to pointer head
 * @str: a string
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}
