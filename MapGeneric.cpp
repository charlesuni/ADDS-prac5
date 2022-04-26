#include "MapGeneric.h"
#include <vector>

std::vector<int> MapGeneric::map(std::vector<int> L)
{
	if (L.size() == 0)
	{
		return transferVec;
	}
	transferVec.push_back(f(L.front()));
	L.erase(L.begin());
	return(map(L));
}