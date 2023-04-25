#include "main.h"

/**
* set_bit - This function sets the value of a bit to one in a particular index
* @n: the number to work on
* @index: the index
* Return: function returns 1 on success and -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int cover;

	if (index > 63)
	{
		return (-1);
	}

	cover = 1 << index;

	*n = (*n & ~cover) | (1 << index);
	return (1);
}
