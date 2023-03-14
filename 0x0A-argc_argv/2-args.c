#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * @argc: This is the number of commandline arguments.
 *
 * @argv: This is the name of the program.
 *
 * Return: Always 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
		argv++;
	}
	return (0);
}
