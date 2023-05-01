#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all data(n) of a list
 *
 * @head: head node
 *
 * Return: sum of data in nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
