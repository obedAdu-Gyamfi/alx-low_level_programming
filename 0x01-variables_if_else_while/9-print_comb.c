#include<stdio.h>
/**
 * main - Entry point.
 *
 * Description: Prints all possible combinations of of single-digit numbers.
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
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
