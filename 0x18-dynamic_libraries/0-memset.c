#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: Copies a char c to the
 * first n characters of the string str
 *
 * @s: String destination.
 * @b: String source
 * @n: Number of times to copy c
 *
 * Return: ptr
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
