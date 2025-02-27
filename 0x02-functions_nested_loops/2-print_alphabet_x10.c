#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: This program writes all the
 * lowercase alpabets
 * using ony _putchar twice.
 *
 * Return: Always 0 on success
 *
 */
void print_alphabet_x10(void)
{
	int num, i;

	for (num = 0; num < 10; num++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
