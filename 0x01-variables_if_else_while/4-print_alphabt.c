#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all the alphabets except e and q
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

