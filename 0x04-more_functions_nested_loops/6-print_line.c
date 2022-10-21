#include "main.h"

/**
 * void print-line - function that draws a straight 
 * line in the terminal.
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
