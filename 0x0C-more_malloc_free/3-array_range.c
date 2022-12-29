#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array of integers from min to  max
 * @min: min value
 * @max: max value
 * Return: If min > max, return NULL.If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
