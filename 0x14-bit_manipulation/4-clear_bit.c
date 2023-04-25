#include "main.h"

/**
* clear_bit - this function clears the value of a bit at a given point
* @n: the number to work on
* @index: the index of the number
* Return: returns 1 on success and -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int cover;

	if (index > 63)
	{
		return (-1);
	}
	
	cover = 1 << index;

	*n = (*n & ~cover);
	return (1);
}

