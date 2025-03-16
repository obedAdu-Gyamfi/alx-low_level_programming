#include "main.h"
/**
 * puts2- This function prints every other
 * character of a string, starting with
 * the first character, followed by a new line
 * @s: String literal
 * Return: void
 */
void puts2(char *s)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len; j += 2)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
