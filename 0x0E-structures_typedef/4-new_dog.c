#include "dog.h"

/**
 * new_dog - Function creates a new dog
 * @name: Name variale of type string
 * @age: Age variable of type float
 * @owner: Owner variable of type string
 *
 * Return: Pointer to newly created dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n, *o;

	n = malloc(strlen(name) + 1);
	o = malloc(strlen(owner) + 1);
	if (n == NULL || o == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(n), free(o);
		return (NULL);
	}
	strcpy(n, name), strcpy(o, owner);
	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}
