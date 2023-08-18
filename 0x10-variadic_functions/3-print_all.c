#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - Entry point.
 * Description: This is a variadic function that
 * returns the sum of all the arguments passed to
 * the function.
 * @format: Format of argument.
 *
 * Return: Void.
 */

void print_all(const char *format, ...)
{
	/*unsigned int i = 0;*/
	va_list arg_list;
	const char *c = format;
	char *seperator = "";

	va_start(arg_list, format);
	/*for (c = format; *c != '\0'; c++)*/
	while (*c != '\0')
	{
		switch (*c)
		{
		case 'i':
			printf("%s %d", seperator, va_arg(arg_list, int));
			break;
		case 'c':
			putchar(va_arg(arg_list, int));
			printf("%s", seperator);
			break;
		case 'f':
			printf("%s %f", seperator, va_arg(arg_list, double));
			break;
		case  's':
			if (c != NULL)
			{
				printf("%s %s", seperator, va_arg(arg_list, char *));
			}
			if (c == NULL)
			{
				printf("nil");
			}
			break;

		default:
			continue;
		}
		c++;
		seperator = ", ";
	}
	printf("\n");
	va_end(arg_list);
}
