#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: Prints n elements of an array of integers
 * @a: a pointer to an array
 * @n: Number of elements of array or array size
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;
	char *delimiter = ", ";

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf("%s", delimiter);
		}
	}
	printf("\n");
}
