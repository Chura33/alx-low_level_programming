#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* string_nconcat(char *s1, char *s2, unsigned int n)- concatenates two strings
* @s1: first string
* @s2: second string
* @n: extra memory
* Return: returns a character pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i;
	char *p;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (; i < (size1 + n); i++)
		p[i] = s2[i - size1];
	p[i] = '\0';

	return (p);
}
