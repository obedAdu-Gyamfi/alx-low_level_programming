#include "main.h"

#include <stddef.h>

/**
 * _strncpy - Copies string with max
 * n bytes from s2
 *
 * @s1: string 1
 * @s2: string 2
 * @n: Length to stop at.
 *
 * Return: Void
 */

char *_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	if (s2 == NULL)
	{
		return (NULL);
	}

	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i++] = '\0';
	}
	return (s1);
}
