#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Entry point.
 *
 * Description: Frees a linked list.
 *
 * @head: head
 *
 * Return: void
 *
 */
void free_list(list_t *head)
{
	list_t *list;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		list = head;
		free(head->str);
		head = head->next;
		free(list);
	}
}
