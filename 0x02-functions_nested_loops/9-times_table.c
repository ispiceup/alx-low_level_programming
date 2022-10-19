#include "main.h"

/**
 * main - Entry point prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int j, k, m, p, t;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			m = j * k;
			p = m / 10;
			t = m % 10;
			if (k == 0)
				_putchar('0');
			else if (m < 10)
			{
				_putchar(' ');
				_putchar('0' + t);
			}
			else
			{
				_putchar('0' + p);
				_putchar('0' + t);
			}
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
