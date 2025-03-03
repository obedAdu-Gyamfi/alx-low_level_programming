#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: Prints the 9 times table, starting
 * with 0
 * Return: void
 *
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = j * i;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((prod % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
