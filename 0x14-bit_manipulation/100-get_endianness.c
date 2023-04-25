#include "main.h"


/**
 * get_endianness - tells whether a machine is a little or big endian
 * Return: returns 0 for big endia, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *) & i;

	return (*e);
}
