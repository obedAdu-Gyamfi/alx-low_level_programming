#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts/prints element array
 * @s: array
 *
 * Return: void
 */

int _atoi(char *s)
{
	int num = 0;
	int i = 0;

	while (s[i] && (s[i] >= '0' && s[i] < '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num);
}
