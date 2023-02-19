#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
int num, n;
for (num = '0'; num < '9' ; num++)
{
	for (n = num + 1; n <= '9'; n++)
	{
		if (n != num)
		{
			putchar(num);
			putchar(n);
			if ((num == '8') || (num == '9'))
				continue;
		putchar(',');
		putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
