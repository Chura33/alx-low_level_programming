#include <stdlib.h>
#include <stdio.h>
/**
* main - main entry point
* Return: return 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('\n');
			exit(0);
		}

		putchar(',');
		putchar(' ');
	}
	return (0);
}
