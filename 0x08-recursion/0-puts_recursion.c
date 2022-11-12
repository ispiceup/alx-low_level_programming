#include "main.h"

/**
* _puts_recursion - a similar function to puts
* _putchar - prints
* @s: input
* Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}
