#include "main.h"

/**
 * _sqrt - Entry point.
 *
 * @m: number to find it's square root.
 * @root: the square root.
 *
 * Return: returns a functional call.
 */
unsigned long  _sqrt(unsigned long m, unsigned long root)
{
	if ((root * root) == m)
		return (root);
	if (root == m / 2)
		return (-1);
	return (_sqrt(m, root + 1));
}
/**
 * _sqrt_recursion - Entry point.
 *
 * Description: Function returns the natural square
 * root of a number.
 *
 * @n: The function takes one argument , n.
 *
 * Return: Returns result.
 *
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt(n, root));
}
