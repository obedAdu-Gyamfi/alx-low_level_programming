#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This is a C program that prints all
 * possible combinations
 * of single-digit numbers seperated by comma and space.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
