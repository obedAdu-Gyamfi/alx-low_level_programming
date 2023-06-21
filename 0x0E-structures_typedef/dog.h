#ifndef DOG_ONE
#define DOG_ONE

/**
 * struct dog - Short description
 * @d: dog d
 * @name: Name
 * @age: age
 * @owner: Owner
 *
 * Description: This is a struct on structs.
 */

typedef struct dog
{
	char *d;
	char *name;
	float age;
	char *owner;
} dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
