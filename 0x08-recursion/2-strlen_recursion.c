#include "main.h"

/**
 *_strlen_recursion - prints string lenght
 *@s: contains address of string
 * Return: the lenght of string.
 */
int _strlen_recursion(char *s)
{
	int k = 0;
	if (*s !=0)
	{
		k = _strlen_recursion(s + 1);
			return (k++);
	}
	return (k);
}
