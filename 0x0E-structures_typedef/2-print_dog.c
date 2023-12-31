#include "dog.h"

/**
 * print_dog - Prints the values of members of variable of type struct dog
 * @d: variable of type struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", 0.0);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
