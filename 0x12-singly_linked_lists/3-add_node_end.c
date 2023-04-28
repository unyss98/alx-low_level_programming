#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to pointer head
 * @str: a string
 *
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t **temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	*temp = *head;
	while (*temp->next != NULL)
		*temp = *temp->next;
	*temp->next = new;

	return (new);
}
