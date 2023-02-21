#include "main.h"
/**
* _islower(int c)- checks if a letter is lower and returns 1 if true
* @c:  the parameter that is checked
* Return: returns 1 or 0
**/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
