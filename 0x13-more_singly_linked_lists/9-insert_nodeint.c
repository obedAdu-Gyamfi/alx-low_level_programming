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
	listint_t *newNode1;
	unsigned int position;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	newNode1 = *head;

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
		newNode->next = newNode1;
		*head = newNode;
		return (newNode);
	}

	while (newNode && newNode1->next)
	{
		position++;
		if (idx == position)
		{
			newNode->next = newNode1->next;
			return (newNode);
		}
		newNode = newNode->next;
	}
	return (NULL);
}
