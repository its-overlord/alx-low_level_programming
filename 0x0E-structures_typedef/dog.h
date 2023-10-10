#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog info
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
