#include "Ring.h"

int Ring::AllRingsCount = 0;

Ring::Ring(Point center, const double outerRadius, const double innerRadius)
{
    SetCenter(center);
    SetRadius(outerRadius, innerRadius);
    Ring::AllRingsCount++;
}

Ring::~Ring()
{
   Ring::AllRingsCount--;
}

void Ring::SetCenter(Point center)
{
    this->_center = center;
}

void Ring::SetRadius(const double outerRadius, const double innerRadius)
{
    const double MIN_VALUE = 0;
    DoubleValidator::AssertValueInRange(innerRadius, MIN_VALUE, outerRadius);
    this->_outerRadius = outerRadius;
    this->_innerRadius = innerRadius;
}

Point& Ring::GetCenter()
{
    return this->_center;
}

double Ring::GetOuterRadius()
{
    return this->_outerRadius;
}

double Ring::GetInnerRadius()
{
    return this->_innerRadius;
}

double Ring::GetArea()
{
    return (3.14 * (_outerRadius - _innerRadius));
}

int Ring::GetAllRingsCount()
{
    return Ring::AllRingsCount;
}
