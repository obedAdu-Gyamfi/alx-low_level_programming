#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry point.
 *
 * Description: This function creates a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: Owner of dog.
 *
 * Return: Void.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 != NULL)
	{
		dog1->name = name;
		dog1->age = age;
		dog1->owner = owner;

		/*printf("%s %f %s\n", dog1->name, dog1->age, dog1->owner);*/
	}
	return (dog1);
}
