#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - Entry point.
 *
 * Description: Returns the length of a singly
 * linked list.
 *
 * @h: Pointer to linked_list
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
	/*printf("%lu\n", h->len);*/
	return (counter);
}
