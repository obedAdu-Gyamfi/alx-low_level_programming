#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: This C program prints out
 * _putchar and a new line.
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char var[] = "_putchar\n";

	write(1, var, sizeof(var) - 1);
	return (0);
}
