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

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;

	while (len != -1)
	{
		_putchar(s[len--]);
	}
	_putchar('\n');
}
