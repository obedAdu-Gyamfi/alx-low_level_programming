#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This function is a command line argument that
 * takes two arguments and multiply them.
 *
 * @argc: This refers to the number of arguments that is passed
 * to the program.
 * @argv: This is a pointer array that points to that arguments that are
 * passed to the program.
 *
 * Return: Always 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	int mul;
	int i;

	if (argc == 3)
	{
		mul = atoi(argv[1]);
		for (i = 2; i < 3; i++)
		{
			mul *= atoi(argv[i]);
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
