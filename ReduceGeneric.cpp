#include "ReduceGeneric.h"
#include <vector>

ReduceGeneric::ReduceGeneric()
{

}

ReduceGeneric::~ReduceGeneric()
{

}

int ReduceGeneric::reduce(std::vector<int> L)
{
	if (L.size() == 1)
	{
		return L.at(0);
	}
	else if(L.size() == 2)
	{
		return(binaryOperator(L.at(0),L.at(1)));
	}
	else if (L.size() > 2)
	{
		int reduceCalc = binaryOperator(L.at(0),L.at(1));
		L.erase(L.begin());
		L.erase(L.begin());
		L.insert(L.begin(), reduceCalc);
		return(reduce(L));
	}
	return 1;
}