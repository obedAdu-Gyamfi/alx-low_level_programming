#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes to stdout using the syscall write
 * @c: character to write.
 * Return: int
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
