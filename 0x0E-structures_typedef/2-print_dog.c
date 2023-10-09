#include "dog.h"

/**
 * print_dog - prints the properties of "dog"
 * @d: pointer to object "dog"
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", d->name);
		printf("\n");
		printf("Age: %6f", d->age);
		printf("\n");
		printf("Owner: %s", d->owner);
		printf("\n");
	}
}
