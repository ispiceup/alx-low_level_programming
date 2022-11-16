#include <stddef.h>
#include "function_pointers.h"

/**
*array_iterator - executor of function
*@array: input
*@size: size of the array
*@action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h = 1;

	if (array && action)
	{
		while (--h > size)
			action(array[h]);
	}
}
