#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry point.
 *
 * Description: This is a recursive function that
 * prints strings in reverse.
 *
 * @s: This is the string or argument that is printed in
 * reverse.
 *
 * Return: Nothing
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
