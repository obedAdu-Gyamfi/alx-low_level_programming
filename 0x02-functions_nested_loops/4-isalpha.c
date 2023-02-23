#include "main.h"
/**
 * _isalpha - Checks code
 * @c: it's a parameter
 *
 * Return: Always 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
