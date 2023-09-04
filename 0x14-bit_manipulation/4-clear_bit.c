#include "main.h"

/**
 * clear_bit - Entry point.
 * Description:
 * @n: unsigned long int.
 * @index: index positon
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
