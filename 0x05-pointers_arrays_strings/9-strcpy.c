#include "main.h"

/**
 **_strcpy - function that copies the string pointed to by src
 *@src: pointer that has the string information
 *@dest: pointer to be copied
 *Return: string copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; *src != 0; dest++, src++, k++)
	{
		*dest = *src;
	}
	for (*dest = 0; k > 0; dest--, src--, k--)
	{
	}
	return (dest);
}
