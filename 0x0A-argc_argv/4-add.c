#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This function is a command line argument that
 * takes two arguments and add them.
 *
 * @argc: This refers to the number of arguments that is passed
 * to the program.
 * @argv: This is a pointer array that points to that arguments that are
 * passed to the program.
 * Return: Always 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	int add;
	int i;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		add = atoi(argv[0]);

		for (i = 1; i < argc ; i++)
		{
			if ((*argv[i] >= '0') & (*argv[i] <= '9'))
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}

	return (0);
}
