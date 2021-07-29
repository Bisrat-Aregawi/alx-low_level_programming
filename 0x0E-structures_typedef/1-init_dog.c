#include "dog.h"

/**
 * init_dog - Function initializes variables of structure with
 * passed values
 * @d: Pointer to the structure
 * @name: Name variable of type string
 * @age: Age variable of type float
 * @owner: Owner variable of type string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		d->name = name, d->age = age, d->owner = owner;
}
