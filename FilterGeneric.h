#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric
{
private:
	virtual bool g(int) = 0;
	std::vector<int> filterTransferVec = {};
public:
	std::vector<int> filter(std::vector<int>);
};

#endif // FILTERGENERIC_H