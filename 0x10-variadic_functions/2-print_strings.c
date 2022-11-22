#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints numbers, followed by a new line
 *@separator: string to be printed between strings
 *@n: amount of numbers given to the function to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *r;
	va_list ap;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		r = va_arg(ap, char *);
		(r) ? printf("%s", r) : printf("(nil)");
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	putchar(10);
	va_end(ap);
}
