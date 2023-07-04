#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Entry point.
 *
 * @head: Head.
 *
 * Description: Deletes the head node of a
 * listint_t linked list.
 *
 * Return: val
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int val = 0;

	if (*head == NULL)
	{
		return (val);
	}

	new_node = *head;

	val = (*head)->n;
	*head = (*head)->next;

	free(new_node);
	return (val);
}
