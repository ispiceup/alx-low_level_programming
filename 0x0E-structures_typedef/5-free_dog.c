#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: pointer.
 * Return: Always return 0
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

