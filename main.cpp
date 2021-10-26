#include <iostream>
#include "DateTime.h"
#include <assert.h>

int main()
{
	assert(IsLeapYear(2012));
	assert(DaysInYear(2013) == 365);
	assert(DaysInYearRange(2012, 2013) == 731);
}