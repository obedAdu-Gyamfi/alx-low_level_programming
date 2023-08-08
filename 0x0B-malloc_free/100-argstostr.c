#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Entry point
 *
 * Description: This function concatenates all
 * the arguments of a program.
 *
 * @ac: Num of Arguments
 * @av: array of arguments
 *
 * Return: string/char
 *
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, n;
	int k = 0;
	int r = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			k++;
		}
	}
	k += ac;

	ptr = malloc(sizeof(char) * k + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			ptr[r] = av[i][n];
			r++;
		}
		if (ptr[r] == '\0')
		{
			ptr[r++] = '\n';
		}
	}
	return (ptr);

}
