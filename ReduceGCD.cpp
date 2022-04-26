#include "ReduceGCD.h"

ReduceGCD::ReduceGCD()
{

}

ReduceGCD::~ReduceGCD()
{

}

int ReduceGCD::binaryOperator(int x,int y)
{
	if (x == 0)
	{
		return y;
	}
	else
	{
		return(binaryOperator(y % x, x));
	}
}