#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - Entry point
 *
 * Description: This function returns a pointer to newly
 * allocated space memory, which contains a copy of the string
 * given as a parameter.
 * @str: Parameter
 *
 * Return: void.
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	dup = malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL);
	memcpy(dup, str, len);
	return (dup);
}
