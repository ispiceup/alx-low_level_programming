#include "main.h"
#include <stdio.h>

/**
 * main - computes the absolute value of an integer.
 *
 * Return: n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
