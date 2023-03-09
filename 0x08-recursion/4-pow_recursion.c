#include "main.h"

/**
 * _pow_recursion - Entry point.
 *
 * Description: This function returns the value of
 * an integer x raised to another integer y.
 *
 * @x: This is the first integer.
 * @y: This is the second integer.
 *
 * Return: returns result
 *
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	result = result * _pow_recursion(x, y - 1);

	return (result);
}
