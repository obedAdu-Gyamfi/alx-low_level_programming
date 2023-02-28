#include "main.h"

/**
 * swap_int - Entry point.
 *
 * Description: This function swaps the values of two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
