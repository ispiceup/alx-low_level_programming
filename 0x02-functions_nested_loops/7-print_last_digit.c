#include "main.h"

/**
 * main - prints the last digit of a number.
 *
 * Return: Always 1.
 */


int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (l);
}
