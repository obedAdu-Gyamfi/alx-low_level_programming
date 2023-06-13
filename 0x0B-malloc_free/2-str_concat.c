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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (concat == NULL)
		return (NULL);
	memcpy(concat, s1, len1);
	memcpy(concat + len1 + 1, s2, len2 + 1);
	return (concat);
}
