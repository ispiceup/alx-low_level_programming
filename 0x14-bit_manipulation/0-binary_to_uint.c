#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - function converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
*
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, k;

	if (!b || !*b)
		return (0);

	a = k = 0;
	while (b[k])
	{
		if (b[k] > 49)
			return (0);
		else if (b[k] == 49)
		{
			a <<= 1;
			a += 1;
		}
		else
			a <<= 1;
		k++;
	}
	return (a);
}


