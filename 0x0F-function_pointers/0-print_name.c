#include <stdio.h>
#include <stdlib.h>
/**
* print_name - print a name
* @name: the name parameter
* @f: function pointer
* Returns: returns void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
