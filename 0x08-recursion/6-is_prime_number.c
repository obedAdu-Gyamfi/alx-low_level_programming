#include "main.h"

/**
 * divisible - Entry point.
 *
 * @num: Number to determine whether it is prime or not.
 * @div: divisble value.
 *
 * Return: Nothing.
 *
 */
int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divisible(num, div + 1));
}
/**
 * is_prime_number - Entry point.
 *
 * @n: This the number.
 *
 * Return: returns a functional call.
 *
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n < 3)
		return (1);

	return (divisible(n, div));
}
