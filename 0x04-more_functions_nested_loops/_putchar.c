#include <unistd.h>
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 on sucess
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
