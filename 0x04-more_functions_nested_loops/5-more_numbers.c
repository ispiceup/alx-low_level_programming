#include "main.h"

/**
 * prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	char a, b, c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
				b = c;
			else
			{
				a = c / 10;

				b = c % 10;
				
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
