#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Entry point.
 *
 * @head: head
 *
 * Description: Frees all malloced lists.
 *
 * Return: void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
	{
		/*printf("(nil)\n");*/
		return;
	}
	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
	head = NULL;
}
