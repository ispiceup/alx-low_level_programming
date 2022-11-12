#include "main.h"

/**
* puts_half -> function that prints half of a string,
* followed by a new line.
* @str: input
* Return: print
*/
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
