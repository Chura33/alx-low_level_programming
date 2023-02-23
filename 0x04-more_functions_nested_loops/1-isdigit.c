#include "main.h"
/**
* _isdigit(int c)- main entry point
* @c: parameter of the function
* Return: returns an integer
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
