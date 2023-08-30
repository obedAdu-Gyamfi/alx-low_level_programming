#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Entry point
 *
 * @head: head
 *
 * Description: Returns the list of all
 * the data(n) of a listint_t liknked list.
 *
 * Return: sum;
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
