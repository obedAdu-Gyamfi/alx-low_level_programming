#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 10.
 * followed by a new line.
 */
void more_numbers(void)
{
	int count, num1, num2, num3;

	for (count = 0; count < 10; count++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			num2 = num1 % 10;
			num3 = num1 / 10;
			if (num1 > 9)
			{
				_putchar('0' + num3);
			}
			_putchar('0' + num2);
		}
		_putchar('\n');
	}
}
