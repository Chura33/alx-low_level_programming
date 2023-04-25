#include "main.h"

/**
 * flip_bits -this function counts the number of bits to change
 * so as to get  one number from another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits that will change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j = 0;

	unsigned long int present;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = xor >> 1;
		if (present & 1)
		{
			j++;
		}
	}
	return (j);
}
