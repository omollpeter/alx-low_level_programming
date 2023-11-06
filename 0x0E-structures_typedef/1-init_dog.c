#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Dog structure
 * @name: First member of the dog structure
 * @age: Second member
 * @owner: Third member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
}
