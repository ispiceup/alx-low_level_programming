#include "main.h"

/**
*_strchr - Returns a pointer to the first occurrence 
*@c - the character
*@s - the string
*
*Returns: address of the first occurence of the string
*/

char *_strchr(char *s, char c)
{
	char *j = s;

	while (*j != 0 && *j != c)
	{
		j++;
	}
	if (*j != c)
	{
		return (0);
	}
	return (j);
}

