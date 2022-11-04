#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring.
 *
 *@s: consist only of bytes from accept
 *@accept: pointer containing the substring
 *
 *Return: length of s which contains characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != 0; a++)
	{
		c = 0;
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
			}
		}
		if (c == 0)
		{
			break;
		}
	}
	return (a);
}
