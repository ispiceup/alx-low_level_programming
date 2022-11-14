#include <stdio.h>
#include "dog.h"

/**
* init_dog - start
* @d: parameter
* @name: dog name
* @age: age of dog
* @owner: name of dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
