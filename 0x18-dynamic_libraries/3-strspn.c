#include "main.h"
#include <string.h>

/**
 * _strspn - Calculates the lenght ...
 * @s: source string.
 * @accept: char to include.
 *
 * Return: Position of string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s && strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}

