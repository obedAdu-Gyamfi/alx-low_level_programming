#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n2, n3;

	for (n2 = 0; n2 <= 98; n2++)
	{
		for (n3 = n2 + 1; n3 <= 99; n3++)
		{
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');
			putchar(' ');
			putchar((n3 / 10) + '0');
			putchar((n3 % 10) + '0');

			if ((n2 == 98) && (n3 == 99))
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
