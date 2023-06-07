#include <unistd.h>

/**
 * _putchar - Entry point
 *
 * Return: Always 0 on success.
 *
 */
int _putchar (char c)
{
	return (write(1,&c,1));
}
