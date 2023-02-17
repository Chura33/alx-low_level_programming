#include <stdlib.h>
#include <stdio.h>
/**
* main - main entry point
* Return: return 0
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '9')
		{
			putchar(i);
			putchar(' ');
			exit(0);
		}
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
