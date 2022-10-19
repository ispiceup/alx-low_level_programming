#include "main.h"
/**
 * main - prints the string "_putchar" as indicated.
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
