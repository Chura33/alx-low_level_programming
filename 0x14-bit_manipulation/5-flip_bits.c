#include "main.h"

/**
 * flip_bits - no of different bits for the numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits you would need to change.
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		counter += xor & 1;
		xor >>= 1;
	}
	return (counter);
}
