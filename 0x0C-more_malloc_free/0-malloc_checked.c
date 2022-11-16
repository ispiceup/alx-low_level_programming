#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - fuction that allocates memory
*@b: size of memory to  be allocated.
* Return: pointer to memory, Else if return exit status 98.
*/
void *malloc_checked(unsigned int x)
{
	void *ptr;

	ptr = malloc(x);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
