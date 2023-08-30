#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point.
 *
 * @head: Head.
 *
 * @index: Index position to delete node.
 *
 * Description: Deletes a node at a given index position.
 *
 * Return: postion.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_del;
	listint_t *current_node;
	unsigned int position;

	current_node = *head;

	if (current_node == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node->next)
	{
		position++;
		if (index == position)
		{
			node_del = current_node->next;
			current_node->next = node_del->next;
			free(node_del);
			return (1);
		}

		current_node = current_node->next;
	}
	return (-1);
}
