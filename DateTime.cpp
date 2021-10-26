#include "DateTime.h"
#include <assert.h>

bool IsLeapYear(int y)
{
	assert(y > 0);
	if (((y % 100 != 0) && (y % 4 == 0)) || ((y % 100 == 0) && (y % 400 == 0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool LaterInYear(int a, int b)
{
	assert(a < 32);
	assert(a > 0);
	assert(b < 32);
	assert(b > 0);
	return a > b;
}

int DaysInYear(int y)
{
	if (IsLeapYear(y))
	{
		return 366;
	}
	else
	{
		return 365;
	}
}

int DaysInYearRange(int y1, int y2)
{
	assert(y1 <= y2);
	int res = 0;
	for (int i = y1; i <= y2; i++)
	{
		res += DaysInYear(i);
	}
	return res;
}
