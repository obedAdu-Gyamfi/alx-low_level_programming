#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: is variable
 *
 * Return: Always 0 on success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
