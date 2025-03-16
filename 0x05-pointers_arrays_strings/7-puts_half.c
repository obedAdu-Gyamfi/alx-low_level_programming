#include "main.h"
/**
 * puts_half - Entry point
 * Description: This function prints the second
 * half of a string
 * If the number of characters is oddd,
 * it prints the last n characters of the string
 * @str: string literal
 * Return: Void
 */
void puts_half(char *str)
{
	unsigned int i, n, len = 0, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
