#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: returns 0
*/
void print_alphabet_x10(void)
{
	char i;

	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
