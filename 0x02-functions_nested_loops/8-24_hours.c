#include "main.h"

/**
 * main - prints every minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m, i, g, b, k;

	for (h = 0; h < 24; h++)
	{
		i = h / 10;
		g = h % 10;
		for (m = 0; m < 60; m++)
		{
			b = m / 10;
			k = m % 10;
			_putchar('0' + i);
			_putchar('0' + g);
			_putchar(':');
			_putchar('0' + b);
			_putchar('0' + k);
			_putchar('\n');
		}
	}
}
