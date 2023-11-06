#include "dog.h"

/**
 * new_dog - Creates a variable of type struct dog(dog_t)
 * @name: First member of dog structure
 * @age: Second member
 * @owner: Third member
 *
 * Return: pointer to the created structure variable, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(*mydog));
	if (!mydog)
		return (NULL);

	mydog->name = malloc(strlen(name));
	if (mydog->name == NULL)
		return (NULL);

	mydog->owner = malloc(strlen(owner));
	if (mydog->owner == NULL)
		return (NULL);

	strcpy(mydog->name, name);
	mydog->age = age;
	strcpy(mydog->owner, owner);

	return (mydog);
}
