#include "dog.h"

/**
 * free_dog - Function frees allocated memories on previous task
 * @d: Pointer to structure object
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d->name), free(d->owner), free(d);
}
