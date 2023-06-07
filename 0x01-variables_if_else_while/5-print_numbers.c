#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Program prints all single numbers of base 10 starting from 0.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
