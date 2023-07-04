#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Entry point.
 *
 * @h: Header
 *
 * Description: Prints all the elements
 * of a listint_t list.
 *
 * Return: Void
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
