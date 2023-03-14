#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * @argc: This is the number of command line argument.
 * @argv: This is program name.
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
