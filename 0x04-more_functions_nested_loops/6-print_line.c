#include "main.h"
/**
 * print_line - Draws a line using _.
 * @n: The number of _ printed.
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0 ; length < n; length++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
