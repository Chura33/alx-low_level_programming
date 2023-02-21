#include "main.h"
/**
* main - main entry point
* Return: returns 0
*/
int main(void)
{
	char name_to_print[] = "_putchar";

	int i;

	for (i = 0; i < (int)strlen(name_to_print); i++)
	{
		putchar(name_to_print[i]);
	}
	putchar('\n');
	return (0);
}
