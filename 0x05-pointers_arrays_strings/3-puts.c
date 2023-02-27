#include "main.h"
/**
* _puts(char *str)- this prints the string
* @str: function parameter
* Return: returns void
*/
void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
