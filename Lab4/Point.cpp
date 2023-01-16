#include "Point.h"

Point::Point()
{
	this->_x = .0;
	this->_y = .0;
}

Point::Point(const double X, const double Y)
{
	SetX(X);
	SetY(Y);
}


void Point::SetX(const double X)
{
	this->_x = X;
}

void Point::SetY(const double Y)
{
	this->_y = Y;
}


double Point::GetX()
{
	return _x;
}

double Point::GetY()
{
	return _y;
}