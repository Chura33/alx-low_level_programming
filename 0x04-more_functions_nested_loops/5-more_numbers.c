#include "main.h"
/**
* more_numbers(void)- entry point
* Return: return nothing
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i / 10 == 0)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
