#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Entry point.
 *
 * Description: Function returns the nth node
 * of a listint_t linked list.
 *
 * @head: head
 * @index: index postion of n;
 *
 * Return: Postion of n;
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (position == index)
		{
			return (head);
		}
		position++;
		head = head->next;
	}
	return (NULL);
}
