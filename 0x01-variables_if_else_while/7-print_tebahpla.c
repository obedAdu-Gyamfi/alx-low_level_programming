#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints the lowecase alphabets in reverse.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
