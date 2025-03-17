#include "main.h"
/**
 * _strcpy - Entry point
 * Description: This is a function that copies the
 * string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 * @dest: This is a pointer to the buffered destination
 * of the copied string
 * @src: This is a pointer to the source of string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; src[i]; i++)
	{
		len++;
	}
	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
