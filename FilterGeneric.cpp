#include "FilterGeneric.h"
#include <vector>
#include <iostream>

std::vector<int> FilterGeneric::filter(std::vector<int> L)
{
	if (L.size() == 0)
	{
		return filterTransferVec;
	}
	if (g(L.front())==false)
	{
		L.erase(L.begin());
		return(filter(L));
	}
	else
	{
		filterTransferVec.push_back(L.front());
		L.erase(L.begin());
		return(filter(L));
	}
}