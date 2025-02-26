#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Program prints all the numbers of
 * base 16 in lowercase.
 * Only the putchar fuction is allowed to output the results.
 * The putchar fuction was used only three times.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int dec;
	int alpha;

	for (dec = '0'; dec <= '9'; dec++)
	{
		putchar(dec);
	}
	for (alpha = 'A'; alpha <= 'F'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
