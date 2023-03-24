#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints the strings passed as arguments
* @separator: this is the delimiter
* @n: this is the number of arguments
* Return: returns void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str_args;

	char *strarg;

	va_start(str_args, n);

	for (i = 0; i < n; i++)
	{
		strarg = va_arg(str_args, char *);
		if (separator != NULL)
		{
			printf("%s", strarg);
		}
		else
			printf("(nil)");
		if (n > 0 && i < (n - 1))
			printf("%s", separator);
	}
	va_end(str_args);
	printf("\n");
}
