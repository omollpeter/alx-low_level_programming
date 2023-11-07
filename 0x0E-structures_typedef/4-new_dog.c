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

	mydog = malloc(sizeof(dog_t));
	if (!mydog)
		return (NULL);

	mydog->name = malloc(strlen(name) + 1);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = malloc(strlen(owner) + 1);
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}

	strcpy(mydog->name, name);
	mydog->age = age;
	strcpy(mydog->owner, owner);

	return (mydog);
}
