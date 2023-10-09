#include "dog.h"

/**
 * init_dog - initializes var of type "struct dog"
 * @d: poiner to dog object
 * @name: pointer to name property value
 * @age: property value of type float for the age.
 * @owner: pointer to property value.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
