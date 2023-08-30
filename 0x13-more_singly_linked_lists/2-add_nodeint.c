#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Entry point
 *
 * @head: Head.
 *
 * @n: integer.
 *
 * Description: Adds a new number to the
 * beginning of a linked list.
 *
 * Return: New list.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

