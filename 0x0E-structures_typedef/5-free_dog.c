#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point.
 *
 * Description: Frees all memory allocations in the
 * function new_dog.
 *
 * @d: a pointer to a struct argument.
 *
 * Return: Void
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
