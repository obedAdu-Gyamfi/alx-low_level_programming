#include "main.h"

/**
 * _print_rev_recursion - Entry point.
 *
 * Description: This recursive function prints
 * a string in reverse.
 *
 * @s: This is the argurement the function takes
 * as an input.
 *
 * Return: Nothing.
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
