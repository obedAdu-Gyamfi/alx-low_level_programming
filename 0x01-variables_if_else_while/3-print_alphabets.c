#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabets in lowercase
 * and then in upper case.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 41; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

