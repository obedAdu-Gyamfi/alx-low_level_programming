#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Prints the sum of numbers
 *
 * @argc: number of command line arguments.
 * @argv: array of commands
 *
 * Return: Always 0 on success.
 */

int main(int argc, char **argv)
{
	int p,k;
	int i;
	int sum = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (p = 1; p < argc; p++)
		{
			ptr = argv[p];
			i = strlen(ptr);

			for (k = 0; k < i; k++)
			{
				if (isdigit(*(ptr + k)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n",sum);
	}

	return (0);
}
