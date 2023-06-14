#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point.
 *
 * @s1: First string/ parameter.
 *
 * @s2: second parameter.
 * Return: Void
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size = 0, i, j;
	char *dup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size++;

	for (i = 0; s2[i]; i++)
		size++;

	dup = (char *) malloc(size + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dup[i] = s1[i];

	for (j = 0; s2[j]; j++)
		dup[i + j] = s2[j];

	dup[size] = '\0';

	return (dup);
}
