#include "main.h"

/**
 * flip_bits - Entry point.
 * @n: unsigned long int.
 * @m: unsigned long int.
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xclusiveOR = n ^ m;
	unsigned int bit = 0;

	if (xclusiveOR > 0)
	{
		bit += xclusiveOR & 1;
		xclusiveOR >>= 1;
	}
	return (bit);
}

