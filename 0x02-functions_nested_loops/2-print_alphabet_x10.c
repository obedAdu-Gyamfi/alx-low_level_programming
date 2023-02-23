#include "main.h"
/**
 * main - Entry point
 *
 * Description: This program writes all the lowercase alpabets
 * using ony _putchar twice.
 *
 * Return: Always 0 on success
 *
 */
void print_alphabet_x10(void)
{
	char al;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
