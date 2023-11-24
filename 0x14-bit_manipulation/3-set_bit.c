#include "main.h"

/**
 * set_bit - Function sets bit to 1 at a given index
 * position
 * @n: bit string.
 * @index: index to set bit.
 * Return:int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}

