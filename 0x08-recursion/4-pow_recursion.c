#include "main.h"

/**
 * _pow_recursion - returns value of x with y as exponent
 * @x: input one
 * @y: input two
 * Return:
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
