#include <stdio.h>
/**
* main- main entry point
* Return: returns 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)
				;
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}