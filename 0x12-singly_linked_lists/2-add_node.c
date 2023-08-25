#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - Entrypoint
 * Description: returns the length of a string.
 *
 * @s: string
 * Return: len.
 */

int _strlen(char *s)
{
	int len = 0;

	while (len[s] != 0)
	{
		len++;
	}
	return (len);
}

/**
 * add_node - Entry point.
 *
 * Description: Function adds a new node
 * to the beginning of the list.
 *
 * @head: head
 * @str: first member of the node.
 *
 * Return: the address of the new element
 * or NULL if failed.
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dp;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	dp = strdup(str);
	if (dp == NULL)
	{
		return (NULL);
		free(new);
	}
	new->str = dp;
	new->len = _strlen(dp);
	new->next = *head;
	*head = new;
	return (new);
}
