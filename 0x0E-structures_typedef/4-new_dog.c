#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copy read only data
 * @dst: pointer for copying char
 * @src: raw data
 */
void _strcopy(char *dst, char *src)
{
	int k;

	for (k = 0; src[k]; k++)
		dst[k] = src[k];
	dst[k] = '\0';
}

/**
 * new_dog - make another dog.
 * @name: name of dog
 * @age: age 
 * @owner: dog owner
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int a, b;

	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(a + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(b + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcopy(d->name, name);
	_strcopy(d->owner, owner);
	d->age = age;
	return (d);
}

