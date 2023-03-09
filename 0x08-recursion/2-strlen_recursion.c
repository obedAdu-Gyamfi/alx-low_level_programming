#include "main.h"

/**
 * _strlen_recursion - Entry point.
 *
 * Description: This function returns the length of
 * a string
 *
 * @s: This is the argument taken by the function.
 *
 * Return: returns 'a'
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}

	return (length);
}
