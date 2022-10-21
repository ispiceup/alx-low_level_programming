#include <stdio.h>
/**
 * main - program that finds and prints the
 * largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return:return 0 with success.
 */
int main(void)
{
	long k;
	long num = 612852475143;

	for (k = 2; k < num; k++)
	{
		if (num % k == 0)
			num /= k;
	}
	printf("%lk\n", num);
	return (0);
}
