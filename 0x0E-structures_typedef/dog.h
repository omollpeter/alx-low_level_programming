#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Dog structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Declaration contains elems of a dog like name, age & owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
