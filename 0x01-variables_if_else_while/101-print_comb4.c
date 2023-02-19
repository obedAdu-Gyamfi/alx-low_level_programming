#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
int num, n, n2;
for (num = '0'; num < '9' ; num++)
{
	for (n = num + 1; n <= '9'; n++)
	{
		for (n2 = n + 1; n2 <= '9';  n2++)
		{
			if ((n != num) != n2)
			{
				putchar(num);
				putchar(n);
				putchar(n2);
				if ((num == '7') || (num == '8'))
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
