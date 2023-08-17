#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Entry point.
 *
 * Description: This is a variadic function that
 * returns the sum of all the arguments passed to
 * the function.
 *
 * @n: Number of arguments.
 *
 * Return: Void.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0 ; i < n; i++)
	{
		sum += va_arg(arg, int);

	}

	return (sum);
}
