#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints number passed through
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * 
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if (j < (n - 1) && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
