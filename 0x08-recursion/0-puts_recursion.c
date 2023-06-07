#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point.
 * Description: This is a recursive function
 * that prints a string followed by a new line.
 *
 * @s: This is the string or argument that get passed
 * to recursive function.
 *
 * Return: Returns the function recursively.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
