#include "main.h"

/**
 * get_endianness - Entry point.
 * Description: this function checks the endianness of a system.
 * Return: void
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte;

	byte = (char *)&num;
	return (*byte);
}
