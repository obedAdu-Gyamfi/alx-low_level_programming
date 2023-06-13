#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point.
 *
 * Description: This is a function that creates array of characters
 * and initializes it with a specific character.
 *
 * @size: This is a parameter that takes unsigned int type and represents the size
 * of the array.
 *
 * @c: This represents the character in the array.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(size * sizeof(char));

	if (size == 0)
	{
		return NULL;
	}
	if (t == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	free(t);

	return (t);
}
