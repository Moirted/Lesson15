#include "DateTime.h"

bool IsLeapYear(int y)
{
	if (((y % 100 != 0) && (y % 4 == 0)) || ((y % 100 == 0) && (y % 400 == 0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SecondsInMinute()
{
	return 60;
}
