#include "main.h"
#include <string.h>
/**
* _strchr(char *s, char c)- function that
* searches for a character in a string
* @s: The pointer to the character array
* @c: The character to be found in the array
* Return: returns a pointer to the
* first occurrence of the character in the array
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);

}
