#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog characteristics
 * @name: Name of a dog
 * @age: Age of a dog
 * @owner: Owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
