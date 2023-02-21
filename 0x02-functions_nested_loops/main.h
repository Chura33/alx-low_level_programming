#include <stdio.h>
#include <string.h>
/**
* print_alphabet- a function that prints all the alphabets
*/
void print_alphabet(void)
{
	char a;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
