#include "main.h"

/**
 * _puts_recursion - Entry point.
 *
 * Description: This function prints a string followed by new line.
 *
 * @s: This is an argument or parameter of the function
 * that point points to the address of the variable passed.
 *
 * Return: Nothing.
 *
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
		_putchar ('\n');
}
