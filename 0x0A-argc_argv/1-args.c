#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This function prints out the
 * the number of arguments passed to the function.
 *
 * @argc: This is a parameter of the main function that
 * refers to the number of arguments passed.
 *
 * @argv: This is also a pointer array which points to each
 * argument passed to the program.
 *
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

