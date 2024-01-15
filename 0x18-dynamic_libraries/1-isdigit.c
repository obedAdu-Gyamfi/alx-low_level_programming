#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: Checks if a char is
 * a digit.
 *
 * @c: Char to check
 *
 * Return: 1 on Success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
