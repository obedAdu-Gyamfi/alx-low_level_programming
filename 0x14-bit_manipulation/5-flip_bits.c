#include "main.h"

/**
 * flip_bits - Entry point
 * @n: first bit string.
 * @m: second bit string
 * Return: unsigned int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int bit = 0;

	while (XOR > 0)
	{
		bit += XOR & 1;
		XOR >>= 1;
	}
	return (bit);
}
