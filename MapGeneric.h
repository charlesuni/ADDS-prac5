#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric
{
private:
	virtual int f(int) = 0;
	std::vector<int> transferVec = {};
public:
	std::vector<int> map(std::vector<int> L);
};

#endif // MAPGENERIC_H