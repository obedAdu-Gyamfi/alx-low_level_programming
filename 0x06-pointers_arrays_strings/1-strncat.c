#include "main.h"
#include <stddef.h>

/**
 * _strncat - Entry point.
 *
 * Description: This function concatenates two strings
 * with maximum n bytes from s2.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: length to stop at.
 *
 * Return: void
 *
 */
char *_strncat(char *s1, char *s2, int n)
{
	int i;
	char *concat = s1;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	while (*concat != '\0')
		concat++;
	while (*s2 != '\0')
	{
		i++;
		if (i > n)
			break;
		*concat++ = *s2++;
	}

	*concat = '\0';

	return (s1);
}
