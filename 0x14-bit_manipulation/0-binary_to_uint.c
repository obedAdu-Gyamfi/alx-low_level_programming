#include "main.h"
#include <string.h>

/**
 * binary_to_uint - This function converts binary number to an
 * unsigned int.
 * @b: bit string.
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b) - 1;
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			number += 1 << i;
		}
		else if (b[len] != '0')
		{
			return (0);
		}
		if (len == 0)
		{
			break;
		}
		i++;
		len--;
	}
	return (number);
}
