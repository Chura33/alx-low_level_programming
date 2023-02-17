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
		if (ch == 'e' || ch == 'q')
			;
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
