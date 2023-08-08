#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Entry point.
 *
 * Description: Function returns a pointer to a two
 * dimensional arrays of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure.
 * If width and height is 0 or negetive, returns NULL.
 *
 * @width: Takes the width of the grid (parameter)
 * @height: Takes the height of the grid as well (parameter)
 *
 * Return: Void
 *
 */

int **alloc_grid(int width, int height)
{
	int **ptr1;
	int i;

	ptr1 = malloc(height * sizeof(int *));

	if (width < 0 || height < 0)
	{
		free(ptr1);
		return (NULL);
	}

	if (ptr1 == NULL)
	{
		free(ptr1);
		return (NULL);
	}

	for (i = 0 ; i < height; i++)
	{
		ptr1[i] = malloc(width * sizeof(int));
		if (ptr1[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr1[i]);
			}
			free(ptr1);
			return (NULL);
		}
	}
	return (ptr1);
}
