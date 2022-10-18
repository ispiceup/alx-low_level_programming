#include "main.h"
/**
 * main - prints the string "_putchar" as indicated.
 * Return: 0 Always
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
