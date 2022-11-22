#include "variadic_functions.h"
#include  <stdarg.h>

/**
 *sum_them_all - functions gives the sum
 *@n: number of inputs given to the function
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int res = 0;
	unsigned int k;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (k = 0; k < n; k++)
		res += va_arg(ap, int);
	va_end(ap);
	return (res);
}
