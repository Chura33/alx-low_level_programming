#include "main.h"
/**
* *_strcat(char *dest, char *src)-joins two strings together
* @*dest:first function parameter
* @*src: second funcion parameter
* Return: returns a character
*/

char *_strcat(char *dest, char *src)
{
	return(strcat(*dest, *src));
}

