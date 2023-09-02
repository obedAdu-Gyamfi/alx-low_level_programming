#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 * binary_to_uint - Entry point.
 * Description: This is a function that converts a binary
 * number to an unsigned int.
 *
 * @b: This is a pointer to a string of 0 or 1 chars.
 *
 * Return: unsigned int.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b) - 1;
	int a = 0;
	unsigned int number = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			number += 1 << a;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		if (i == 0)
			break;
		a++;
		i--;
	}
	return (number);
}
