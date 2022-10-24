#include "main.h"

/**
* void_puts -> function that prints a string, followed by a
* new line, to stdout
* @str: prints string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
