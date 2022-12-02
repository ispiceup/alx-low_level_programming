#include <stdio.h>
#include "main.h"

/*
* unsigned long int n, unsigned int index - returns bit value of index
* index: bits
*@n : number
* Returns: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
