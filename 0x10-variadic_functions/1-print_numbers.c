#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point.
 *
 * Description: This is a variadic function that prints
 * numbers, followed by a new line.
 *
 * @seperator: This is a string that is printed between
 * numbers.
 *
 * @n: This is the number of arguments.
 *
 * Return: Void:
 *
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int num;

	va_start(arg, n);
	for (i = 0 ; i < n ; i++)
	{
		if (seperator != NULL)
		{
			num = va_arg(arg, int);
			printf("%d", num);
			if (i != n - 1)
			{
				printf("%s", seperator);
			}

		}
	}
	va_end(arg);
	printf("\n");

}

