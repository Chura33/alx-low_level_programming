#include "main.h"
/**
* print_diagonal(int n)- main entry point
* @n: parameter
* Return: return void
*/

void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
