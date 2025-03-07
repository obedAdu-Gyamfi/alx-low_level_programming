#include "main.h"

/**
 * _isupper - Checks if a character is upper case letter.
 *
 * @c: parameter to check
 *
 * Return: Always 1 on success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
