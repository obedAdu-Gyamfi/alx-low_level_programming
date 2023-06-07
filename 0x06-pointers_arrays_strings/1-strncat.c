#include "main.h"
/**
 * _strncat - Entry point.
 *
 * Description: This function concatenates two strings
 * with maximum n bytes from s2.
 *
 * @dest: first string.
 * @src: second string.
 * @n: length to stop at.
 *
 * Return: char
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
