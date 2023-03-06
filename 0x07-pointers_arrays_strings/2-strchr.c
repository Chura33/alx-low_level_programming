#include "main.h"
/**
* _strchr(char *s, char c)- function that searches for a character in a string
* @s: The pointer to the character array
* @c: The character to be found in the array
* Return: returns a pointer to the first occurrence of the character in the array
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	int counter = 0;

	int index;

	while (*(s + i) != '\0')
	{
		counter += 1;
		i++;
	}
	counter += 1;

	int size = counter * sizeof(char);
	
	for (i = 0; i < size; i++)
	{
		if (s[i] == c)
		{
			index = i;
		}
	}

	char result[size];

	char *ptr = result;
	
	for (i=0; i < size; i++)
	{
		if (i >= index)
		{
			*(result) = s[i];
		}
		result++;
	}

	return (ptr);
}
