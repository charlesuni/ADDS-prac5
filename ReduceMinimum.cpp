#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum()
{

}

ReduceMinimum::~ReduceMinimum()
{

}

int ReduceMinimum::binaryOperator(int x,int y)
{
	if (x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}