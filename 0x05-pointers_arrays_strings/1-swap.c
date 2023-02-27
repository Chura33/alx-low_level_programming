#include "main.h"
/**
* swap_int(int *a, int *b)- this swaps the value of two integers using pointers
* @a: first integer parameter
* @b: second integer parameter
* Return: returns nothing (void )
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
