#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Entry point.
 *
 * @h: Head.
 *
 * Description: Returns the lenght of
 * a linked list.
 *
 * Return: len;
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
