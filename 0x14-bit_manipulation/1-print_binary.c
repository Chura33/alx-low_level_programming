#include "main.h"
#include <stdio.h>

/**
* print_binary - Prints the binary of a number
*@n: the number to conver to binary
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
