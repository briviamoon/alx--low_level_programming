#include "dog.h"

/**
 * print_dog - prints the properties of "dog"
 * @d: pointer to object "dog"
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %6f\nOwner: %s\n", d->name, d->age, d->owner);
}
