#include "file.h"
#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This C program prints out the _putchar and a new line.
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char var[] = "_putchar\n";
	int my_var = 0;

	while (var[my_var] != '\n')
	{
		char c = var[my_var];

		_putchar(c);

		my_var++;
	}
	putchar('\n');
	return (0);
}
