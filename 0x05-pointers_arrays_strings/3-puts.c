#include "main.h"

/**
 * _puts - Entry point.
 *
 * Description: Prints a string to stdout.
 * @str: Parameter.
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
