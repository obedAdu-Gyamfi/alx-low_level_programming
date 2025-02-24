#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned int buff = 59;

	write(1, var, buff);
	return (1);
}
