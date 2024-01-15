#include "main.h"

/**
 * _puts - Entry Point.
 *
 * Description: Prints a string
 *
 * @str: string
 *
 * Return: Void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len++]);
	}
	_putchar('\n');
}
