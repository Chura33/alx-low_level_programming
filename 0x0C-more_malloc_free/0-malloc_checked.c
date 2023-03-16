#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* malloc_checked(unsigned int b)- allocates memory to the heap
* @b: parameter that indicates the size of the array
* Return: returns void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

