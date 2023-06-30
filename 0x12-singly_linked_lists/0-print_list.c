#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Entry point.
 *
 * Description: This function prints out all the elements
 * of a list_t.
 *
 * @h: pointer parameter.
 * Return:void
 *
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
