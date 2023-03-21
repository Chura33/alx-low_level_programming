#include <stdio.h>

struct date
{
	int day, month, year;
};

int main()
{
	struct date dob, dod;
	dob.day = 5;
	dob.month = 7;
	dob.year = 98;

	dod = dob;

	printf ("He will die on the day he was born which is: %d %d %d\n", dod.day, dod.month, dod.year);
	return (0);
}
