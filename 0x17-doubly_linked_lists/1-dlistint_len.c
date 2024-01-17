#include "lists.h"

/**
 * dlistint_len - Prints the number of elements in a
 * doubly linked list
 *
 * @h: Doubly linked list.
 * Return: The length of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
