#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry point.
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

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned char *str;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		if (seperator != NULL)
		{
			str =  va_arg(arg, unsigned char *);
			printf("%s", str);

			if (i != n - 1)
			{
				printf("%s", seperator);
			}
		}
		else
		{
			printf("nil");
		}
	}
	va_end(arg);
	printf("\n");

}

