#include "main.h"
#include <stdio.h>
/**
 * rev_string - This is a function that reverses a string
 * @s: A pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, len = 0;
	char out;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0 ;  j < len / 2; j++)
	{
		out = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = out;

	}
}
