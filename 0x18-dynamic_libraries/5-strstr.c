#include "main.h"
#define NULL ((void *)0)

/**
 * match - match s2
 *
 * @s1: string to match
 * @s2: string to match with.
 *
 * Return: integer.
 */

int match (char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s2 == '\0');
}

/**
 * _strstr - Entry point.
 *
 * @heystack: Source string to search from.
 * @needle: Substring to find.
 *
 * Return: Pointer to substring
 */

char *_strstr(char *heystack, char *needle)
{
	if (*needle == 0)
	{
		return (heystack);
	}
	while (*heystack != '\0')
	{
		if ((*heystack == *needle) && match(heystack, needle))
		{
			return (heystack);
		}
		heystack++;
	}
	return ('\0');
}
