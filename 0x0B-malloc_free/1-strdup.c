#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - Entry point
 *
 * @str: Parameter
 *
 * Return: void.
 */
char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *dup = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (dup == NULL)
		return (NULL);
	memcpy(dup, str, len);
	return (dup);
}
