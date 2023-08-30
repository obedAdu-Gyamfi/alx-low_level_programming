#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Entry point.
 *
 * @head: head
 *
 * Description: Frees all malloced lists.
 *
 *
 * Return: Void.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		list = head->next;
		free(head);
		head = head->next;
		head = list;
	}
}
