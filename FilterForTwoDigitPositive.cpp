#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{

}	

FilterForTwoDigitPositive::~FilterForTwoDigitPositive()
{

}

bool FilterForTwoDigitPositive::g(int x)
{
	if (x > 9 && x < 100)
	{
		return true;
	}
	else
	{
		return false;
	}
}