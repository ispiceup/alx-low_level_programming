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
	int bit;

	bit = (n >> index) & 1;

	if ((bit == 0) || (bit == 1))
		return (bit);
	else
		return (-1);
}
