#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point.
 *
 * Description: Function prints a struct dog.
 *
 * @d: Dog
 * Return: Void
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	if (d->age == 0)
	{
		printf("Age: nil\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: nil\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
