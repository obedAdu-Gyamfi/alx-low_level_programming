#include <stdio.h>
#include <string.h>

/**
 * main - Etry point.
 *
 * @argc: This is the number of command line arguments.
 * @argv: This is the name of the program.
 * Return: Always 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
