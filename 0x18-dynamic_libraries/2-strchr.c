#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Searches for the first occurances of the char
 * c in the string str.
 *
 * @str: Source string to search from.
 *
 * @c: Character to search for.
 *
 * Return: void
 */

char *_strchr(char *str, char c)
{
	char *flag = NULL;

	do {
		if (*str == c)
		{
			flag = str;
			break;
		}
	} while (*str++);

	return (flag);
}


