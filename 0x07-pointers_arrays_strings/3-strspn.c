#include <stdio.h>
#include <stdbool.h>
/**
* _strspn(char *s, char *accept)- main function
* @s: first parameter
* @accept: second parameter
* Return: returns an unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	unsigned int j = 0, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool found_match = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
			break;
		counter++;
	}
	return (counter);
}
