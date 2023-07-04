#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Entry point.
 *
 * @head: head.
 *
 * @n: number.
 *
 * Description: Adds a number to the end
 * of a linked list.
 *
 * Return: List.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		tail_node = *head;
		while (tail_node->next != NULL)
		{
			tail_node = tail_node->next;
		}
		tail_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (*head);
}
