# include <stdio.h>
/**
* main- main entry point
* Return: return 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}

	putchar('\n');
	return (0);
}

