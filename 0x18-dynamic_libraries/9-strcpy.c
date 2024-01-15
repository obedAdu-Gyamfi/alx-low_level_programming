#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point
 *
 * Description: Prints elements of an array until
 * the null char
 *
 * @dest: array
 * @src: stoping term.
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	if (dest == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	
	return (s);
}
