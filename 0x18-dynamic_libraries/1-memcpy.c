#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _memcpy - Entry point
 *
 * Description: This function copies a character from src
 * to dest.
 * @dest: String to copy into(destination)
 * @src: Source to copy string from
 * @n: Number of times to copy
 *
 * Return: Void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n--)
	{
		*(dest++) = *(src++);
	}
	return (c);
}
