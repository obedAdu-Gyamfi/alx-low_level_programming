#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 * @name: pointer to name to print
 * @f: function to print name
 * Return: Void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

