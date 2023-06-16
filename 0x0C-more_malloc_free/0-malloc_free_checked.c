#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point.
 *
 * Description: This function allocates memory
 * using malloc. It returns a pointer to the allocated
 * memory.
 * If malloc fails, the malloc_checked function causes a
 * normal process termination with a status value of 98.
 *
 * @b: This is the parameter passed to the malloc_checked
 * function.
 *
 * Return: Void.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc( b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

