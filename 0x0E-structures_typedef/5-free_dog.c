#include "dog.h"

/**
 * free_dog - Frees memory allocated to a variable of type struct dog
 * @d: Variable to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		free(d);
	free(d->name);
	free(d->owner);
	free(d);
}
