#include "main.h"
/**
 * _isalpha - Checks code
 * @c: it's a parameter
 *
 * Return: Always 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65  && c <= 90))
		return (1);
	else
		return (0);
}
