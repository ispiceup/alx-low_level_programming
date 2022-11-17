#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index -> function that searches for an integer
* @size: number of elements in array
* @cmp:function pointer
* @array: array
*
* Return - index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;
	k = -1;
	if (size <= 0)
	return (-1);
	if (!array || !cmp)
		return (-1);

	while (++k < size)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
