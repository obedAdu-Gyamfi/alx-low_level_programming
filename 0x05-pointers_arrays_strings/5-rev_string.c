#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: This function reverses a string.
 *
 * @s: this is the a pointer to the string parameter that
 * is passed to the function.
 *
 * Return: Nothing.
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char out;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2;i++)
	{
		out = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = out;
	}
}
