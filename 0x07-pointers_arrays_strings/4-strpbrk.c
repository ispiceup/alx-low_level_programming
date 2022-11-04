#include "main.h"

/**
*_strpbrk -> function that searches a string for any of a set of bytes.
* 
*@s: 
*@accept:
*/
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s !=0)
	{
		for (a = 0; accept[a] != 0; a++)
		{
			if(*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
