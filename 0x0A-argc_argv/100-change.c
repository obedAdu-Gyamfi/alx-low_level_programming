#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: Program prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: Number of command line arguments
 * @argv: Array
 *
 * Return: Always 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int amount;
	int k;
	int i;

	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		k = 0;

		while (amount > 0)
		{
			for (i = 0; i < 5; i++)
			{
				while (amount / change[i] > 0 && amount != 0)
				{
					amount -= change[i];
					k++;
				}
				if (amount <= 0)
					break;
			}
		}
		printf("%d\n", k);
	}
	return (0);
}

