#include<stdio.h>
/**
 * main - Entry point
 * Description: Prints all the alphabets except e and q
 * Return: Always 0 (success)
 *
 */
int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if ((alpha != 'e') && (alpha != 'q'))
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}

