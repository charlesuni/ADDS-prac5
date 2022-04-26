#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive()
{

}

FilterNonPositive::~FilterNonPositive()
{

}

bool FilterNonPositive::g(int x)
{
	if (x > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}