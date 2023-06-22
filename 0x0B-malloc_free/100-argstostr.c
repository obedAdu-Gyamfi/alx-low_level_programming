#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - Entry point.
 *
 * Description: Function concatenates all the arguments
 * of the program.Returns null if ac==0 of
 * av == 0. Returns a pointer to new string, or null if
 * it fails.
 * Each argument is followed by a new line in the string.
 *
 * @ac: A funcional parameter.
 * @av: a pointer parameter that points to another
 * pointer.
 *
 * Return: Void.
 *
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;

	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ptr = malloc(ac * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < ac; i++)
	{
		ptr[i] = *av[i];
		printf("%s\n", av[i]);
	}
	_putchar('\n');
	/*return (ptr);*/
}
