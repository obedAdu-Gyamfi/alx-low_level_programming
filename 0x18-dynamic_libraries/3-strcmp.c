#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strcmp - Entry point.
 *
 * Description: Compares two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: constant
 */

int _strcmp(char *s1, char *s2)
{
	if ((s1 == NULL) || (s2 == NULL))
	{
		return(0);
	}
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
