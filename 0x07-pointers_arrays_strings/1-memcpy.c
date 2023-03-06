#include "main.h"
/**
* _memcpy(char *dest, char *src, unsigned int n)- thisi
* is a function that copies one block of memory into another.
* @dest: Parameter that signifies the destination address
* @src: Parameter that signifies the source address
* @n: Parameter that signifies the size of the block of memory to be copied
* Return: returns a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i < (int)n; i++)
	{
		*(dest + i) = *(src + i);

	}
	return (dest);
}
