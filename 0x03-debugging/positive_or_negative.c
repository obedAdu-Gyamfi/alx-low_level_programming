#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */
/**
 * Positive_or_negative - Entry point
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	if (i > 0)
        	printf("%d is positive\n", i);
	else if (i < 0)
        	printf("%d is negative\n", i);
	else
        	printf("%d is zero\n", i);
}
