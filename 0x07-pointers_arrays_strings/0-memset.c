#include "main.h"
/**
 * _memset(char *s, char b, unsigned int n)- This
 * is the main entry point of the function
 * @s: This is the pointer to the character array
 * @b: This is the parameter that defines the character to be filled
 * @n: This is the space in bytes that is taken in the memory
 * Return: returns a pointer to the character array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

	for (counter = 0; counter < (int)n; counter++)
	{
		*(s + counter) = b;
	}
	return (s);
}
