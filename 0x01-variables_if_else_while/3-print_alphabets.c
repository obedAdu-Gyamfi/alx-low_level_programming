#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabets in lowercase and then in upper case.
 * Return: Always 0 (success)
 */
int main(void)
{
int my_val;
int my;
for (my_val = 'a'; my_val <= 'z'; my_val++)
{
my_val = tolower(my_val);
putchar(my_val);
}
for (my = 'A'; my <= 'Z'; my++)
{
putchar(my);
}
putchar('\n');
return (0);
}

