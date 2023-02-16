#include <stdio.h>
/**
* main- Entry point
printf - function that prints
Return: (0) success
*/

int main(void)
{
	int c;
	int i;
	int li;	
	int lli;
	int f;
	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);
	printf("Size of a char: %d byte(s)",c)
	printf("Size of a int: %d byte(s)",i)
	printf("Size of a long int: %d byte(s)",li)
	printf("Size of a long long int: %d byte(s)",lli)
	
	printf("Size of a float  %d byte(s)",f)
	return (0)
}
