#include "main.h"

/**
 * _strlen - Entry point.
 *
 * Description: This function returns the length of
 * a string.
 *
 * @s: Parameter.
 * Return: Returns the value of len.
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
