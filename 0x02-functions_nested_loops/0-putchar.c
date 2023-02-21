#include "main.h"
/**
* main - main entry point
* _putchar - returns the string _putchar
* Return: returns 0
*/
int main(void)
{
	char name_to_print[] = "_putchar";

	int i;

	for (i = 0; i < (int)strlen(name_to_print); i++)
	{
		_putchar(name_to_print[i]);
	}
	_putchar('\n');
	return (0);
}
