#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Point.h"
#include "DoubleValidator.h"

class Rectangle
{
public:
	Rectangle(Point point, const double length, const double width);

	void SetLength(const double length);
	void SetWidth(const double width);
	void SetPoint(Point point);

	Point& GetPoint();
	double GetLength();
	double GetWidth();
private:
	Point _point;
	double _length = .0;
	double _width = .0;
};

#endif // !_RECTANGLE_H_