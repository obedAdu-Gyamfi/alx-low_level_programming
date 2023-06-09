#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints out
 * the argument passed to this program.
 *
 * @argc: parameter of the main function that refers
 * to the number of arguments passed.
 * @argv: This is a pointer array that points to each
 * argument that is passed to the program.
 *
 * Return: Always 0 on succes..
 *
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
	{
		printf("%d\n", argc);
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

