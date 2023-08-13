#include "main.h"

/**
 * factorial - Entry point.
 *
 * Description: This function returns the factorial
 * of given number.
 *
 * @n: This is the parameter taken by
 * the function
 *
 * Return: Nothing
 *
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	result = result * factorial(n - 1);

	return (result);
}
