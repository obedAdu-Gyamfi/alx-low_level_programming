#include "main.h"
#include <stddef.h>

/**
 * _strncpy - Entry point.
 *
 * Description: This function copies strings
 * with maximum n bytes from s2.
 *
 * @s1: This is the first string (parameter).
 * @s2: This is the second string (parameter).
 * @n: This is the length to stop at.
 *
 * Return: void.
 *
 */
char *_strncpy(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}

	for (; i < n ; i++)
	{
		s1[i] = '\0';
	}
	return (s1);
}
