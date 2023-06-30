#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Entry point.
 *
 * Description: Returns the length of a singly
 * linked list.
 *
 * @h: Pointer to linked_list(head)
 *
 * Return: The number of elements in a linked_list.
 *
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
