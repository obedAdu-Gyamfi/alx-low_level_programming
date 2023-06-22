#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcode of own main function
 * @argc: argument count
 * @argv: array argument
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;
	/*unsigned char *main = func_ptr*/

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = unsigned char * int (main)(int argc, char *argv[]);

	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hx ", func_ptr[i++]);
		printf("%hx\n", func_ptr[i]);
	}
	return (0);
}
