#include "main.h"

/**
 * get_bit - Entry point
 * @n: bit string.
 * @index: position to retreive bit from
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
