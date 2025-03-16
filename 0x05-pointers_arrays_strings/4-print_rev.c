#include "main.h"
/**
 * print_rev - A function that prints a string literal
 * in reverse
 * @s: This is a pointer to a string literal
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, len = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (j = len - 1 ; j != -1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
