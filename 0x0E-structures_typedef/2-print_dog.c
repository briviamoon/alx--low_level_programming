#include "dog.h"

/**
 * print_dog - prints the properties of "dog"
 * @d: pointer to object "dog"
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
