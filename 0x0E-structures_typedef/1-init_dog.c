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
	if (!d)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
