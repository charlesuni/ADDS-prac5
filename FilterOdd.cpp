#include "FilterOdd.h"

FilterOdd::FilterOdd()
{

}

FilterOdd::~FilterOdd()
{

}

bool FilterOdd::g(int x)
{
	if (x%2 == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}