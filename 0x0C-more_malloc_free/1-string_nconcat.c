#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - fuction that concats two strings
* @s1: base sting to concat to. `Null` will return as empty.
* @s2: string to copy from. 'NULL' will return as empty string.
* @n: amount of s2 to copy.
* Return: pointer to allocated memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int j, a, b;

	a = b = 0;
	if (s1)
		for (; s1[a]; a++)
			;
	if (s2)
		for (; s2[b]; b++)
			;
	if (!(n >= b))
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);
	if (!str)
		return (NULL);

	for (j = 0; j < (a + b); j++)
	{
		if (j < a)
			str[j] = s1[j];
		else
			str[j] = s2[j - a];
	}

	str[j] = '\0';

	return (str);
}
