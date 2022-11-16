#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - prints the dog struct
* @d: pointer to the dog struct
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
