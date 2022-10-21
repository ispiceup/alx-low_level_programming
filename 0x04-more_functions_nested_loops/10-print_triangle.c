#include "main.h"

/**
 * print_triangle - function that prints a triangle,
 * followed by a new line.
 *
 */
void print_triangle(int size)
{
	int k, m;

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (m = size; m >= 1; m--)
			{
				if (k < m)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
