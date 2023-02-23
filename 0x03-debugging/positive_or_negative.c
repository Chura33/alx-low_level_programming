#include "main.h"
/**
* positive_or_negative - checks if a number is positive, negavite or zero
*
* @i: the number to be checked
*
*Return: always
*/
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative \n", i);
	else if (i > 0)
		printf("%d is positive \n", i);
	else
	{
		printf("%d is zero \n", i);
	}
}
