#include "main.h"
/**
* positive_or_negative - prints out whether a number is positive or negative
* @i: a function parameter
* Return: returns nothing
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
	{
		printf("%d is negative\n", i);
	}
}
