#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point.
 *
 * @head: head
 * @n: integer value of new node.
 * @idx: index position to insert new node.
 *
 * Description: Inserts a new node at a given
 * index position.
 *
 * Return: new node.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int position;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	temp = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}

	while (temp && temp->next)
	{
		position++;
		if (idx == position)
		{
			newNode->next = temp->next;
			return (newNode);
		}
		temp = temp->next;
	}
	return (NULL);
}
