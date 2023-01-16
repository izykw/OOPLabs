#include "Rectangle.h"

Rectangle::Rectangle(Point point, const double length, const double width)
{
	SetPoint(point);
	SetLength(length);
	SetWidth(width);
}


void Rectangle::SetLength(const double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(const double width)
{
	DoubleValidator::AssertPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetPoint(Point point)
{
	this->_point = point;
}


Point& Rectangle::GetPoint()
{
	return _point;
}

double Rectangle::GetLength()
{
	return _length;
}

double Rectangle::GetWidth()
{
	return _width;
}


