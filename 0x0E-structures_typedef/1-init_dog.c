#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Entry point
 *
 * Description: This function initializes a variable
 * of type struct dog.
 *
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog.
 *
 * Return: Void
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name =  name;
		d->age = age;
		d->owner = owner;
	}
}
