#include "main.h"

/**
 * get_bit - get value of a bit at a particular index
 * @index: the index
 * @n: the range
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m <<= index;

	return ((n & m) ? 1 : 0);
}
