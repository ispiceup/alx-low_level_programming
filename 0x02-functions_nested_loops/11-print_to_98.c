#include "main.h"
#include <stdio.h>

/**
 * main - Entry point prints all natural numbers from n to 98,
 * followed by new line.
 *
 * Return: void.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
