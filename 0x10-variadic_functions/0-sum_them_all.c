#include "variadic_functions.h"
#include  <stdarg.h>

/**
 *sum_them_all - functions gives the sum
 *@n: number of inputs given to the function
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int res = 0;
	unsigned int k;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (k = 0; k < n; k++)
		res += va_arg(num, int);
	va_end(num);
	return (res);
}
