#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric
{
private:
	int binaryOperator(int,int);
public:
	ReduceMinimum();
	~ReduceMinimum();
	
};

#endif  // REDUCEMINIMUM_H