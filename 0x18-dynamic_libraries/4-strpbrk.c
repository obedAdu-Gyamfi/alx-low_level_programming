#include <string.h>
#include "main.h"

/**
 * _strpbrk - Locates the first occurance in a string
 * s of any bytes in the string accept.
 * @s: Source string.
 * @accept: characters to include
 *
 * Return: A pointer to the substring.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if ( strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

