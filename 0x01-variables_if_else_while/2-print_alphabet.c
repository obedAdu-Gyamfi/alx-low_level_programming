#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabets in lowercase, followed
 * Return: Always 0 (success)
 */
int main(void)
{
int al = 'a';
for (al <= 'z'; al++;)
{
al = tolower(al);
putchar(al);
}
putchar('\n');
return (0);
}
