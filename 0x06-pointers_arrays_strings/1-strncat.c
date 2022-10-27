#include "main.h"

/**
* _strncat -> function that concatenates two strings.
* @dest: copying to
* @src: copying from
* @n: number of char for ccopying
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
