#include "main.h"

/**
 * reverse_array - Entry point.
 *
 * Description: This function reverses the content of an
 * array of integers.
 *
 * @a: This is points to the first integer of the array.
 *
 * @n: The number of elements of the array.
 *
 * Return: void.
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
