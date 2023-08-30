#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * listint_len - Entry
 * @head: head
 * Return: len
 */

size_t listint_len(const listint_t *head)
{
	size_t len = 0;

	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}

/**
 * print_listint_safe - Entry point.
 *
 * @head: Head.
 *
 * Description: Prints all nodes of a linked list.
 *
 * Return: size of list.
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	size_t len = 0;

	if (head == NULL)
	{
		exit(98);
	}

	printf("Inside Func.\n");

	len = listint_len(head);

	printf("%d", (int)len);

	while (i < len)
	{
		printf("In While ...");
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	if (len == (i + 1))
	{
		printf("[%p] %d\n", (void *)head, head->n);
	}

	return (i);
}
