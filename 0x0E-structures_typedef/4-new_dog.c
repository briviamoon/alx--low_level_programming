#include "dog.h"

/**
 * new_dog - creates new object "dog2"
 * @name: pointer to name of dog
 * @age: age property
 * @owner: pointer to owner property
 * Return: new object called dog2.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = malloc(sizeof(char) * (_strlen(name) + 1));
	dog2->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog2->name == NULL || dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2->owner);
		free(dog2);
		return (NULL);
	}
	dog2->name = _strcpy(dog2->name, name);
	dog2->age = age;
	dog2->owner = _strcpy(dog2->owner, owner);
	return (dog2);
}

/**
 *_strcpy - copy a string to a destination.
 *@dest: destination of copied string.
 *@src: source of copied string.
 *Return: home.
 */

char *_strcpy(char *dest, char *src)
{
	char *home = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (home);
}

/**
 *_strlen - grts string length.
 *@s: string argument
 *Return: length.
 *(*s != '\0'): iterate throught each char while it's not null.
 *len: a counter throught the strin array positions/index.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
