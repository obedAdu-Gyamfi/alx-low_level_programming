#include "lists.h"

/**
 * add_dnodeint - Entry point
 * Description: Adds a node to the beginning of a doubly linked
 * list
 * @head: node
 * @n: integer value
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
