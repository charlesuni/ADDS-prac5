#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include <cmath>
	
MapAbsoluteValue::MapAbsoluteValue()
{

}

MapAbsoluteValue::~MapAbsoluteValue()
{

}

int MapAbsoluteValue::f(int x)
{
	return std::abs(x);
}