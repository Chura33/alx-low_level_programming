#include <stdio.h>
/**
* _strpbrk(char *s, char *accept)- returns pointer to character
* @s: string to be scanned
* @accept: other string
* Return: returns a pointer to a character
*/

char *_strpbrk(char *s, char *accept)
{
	size_t i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
