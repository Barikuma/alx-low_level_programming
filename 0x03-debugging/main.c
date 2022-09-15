#include "main.h"

int main(void)
{
	int month, day, year;

	month = 11;
	day = 31;
	year = 2001;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return 0;
}
