#ifndef REDUCEGCD
#define REDUCEGCD
#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric
{
private:
	int binaryOperator(int,int);
public:
	ReduceGCD();
	~ReduceGCD();
	
};

#endif // REDUCEGCD