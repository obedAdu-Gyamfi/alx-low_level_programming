#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to
 * 0 at a give index.
 * @n: bit string.
 * @index: position to unset bit.
 * Return: 1 0n success and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
