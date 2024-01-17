#include "lists.h"

/**
 * print_dlistint - prints doubly linked lists in c
 *
 * @h: doubly linked list.
 * Return: The number of nodes present
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
