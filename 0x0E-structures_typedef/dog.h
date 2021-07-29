#ifndef _DOG_H_
#define _DOG_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Dog characteristics
 * @name: Name of a dog
 * @age: Age of a dog
 * @owner: Owner of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
