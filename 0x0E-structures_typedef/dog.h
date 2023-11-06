#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Declaration contains elems of a dog like name, age & owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
