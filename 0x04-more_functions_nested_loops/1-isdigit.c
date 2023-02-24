#include "main.h"

/**
 * _isdigit: Checks for a digit (0 through 9)
 *
 * @c: parameter to check for
 *
 * Return: Always 1 on success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
