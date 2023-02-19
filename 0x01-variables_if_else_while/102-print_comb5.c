#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, n2, n3;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n2 = 0; n2 <= 98; n2++)
	{
		for (n3 = n2 + 1; n3 <= 99; n3++)
		{
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');
			putchar(' ');
			putchar((n3 / 10) + '0');
			putchar((n3 % 10) + '0');

			if ((n2 == 98) || (n3 == 99))
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
