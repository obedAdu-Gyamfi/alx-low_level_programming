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
for (int alphabet_ = 'a'; alphabet_ <= 'z'; alphabet_++)
{
alphabet_ = tolower(alphabet_);
putchar(alphabet_);
}
putchar('\n');
return (0);
}
