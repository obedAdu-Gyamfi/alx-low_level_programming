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
	d->name == NULL ? printf("Name: nil\n"):printf("Name: %s\n", d->name);

	d->age == 0 ? printf("Age: nil\n"):printf("Age: %f\n", d->age);

	d->owner == NULL ? printf("Owner: nil\n"):printf("Owner: %s\n", d->owner);
	/*printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);*/
}
