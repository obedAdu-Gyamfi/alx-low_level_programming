#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - Entry point.
 * Description: Returns the lenght of a string.
 * @s: string.
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (len[s] != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * add_node_end - Entry point.
 * Description: Function adds a node to the end
 * of a linked list.
 * @head: head
 * @str: pointer to a string.
 * Return: new;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;
	char *dp;

	new = (list_t *)malloc(4 * sizeof(list_t));
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
		free(dp);
		return (NULL);
	}
	new->str = dp;
	new->len = _strlen(dp);
	new->next = NULL;
	if (*head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
