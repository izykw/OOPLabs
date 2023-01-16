#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Point.h"

class Rectangle
{
public:
	Rectangle();
	Rectangle(Point* point, const double length, const double width);

	void SetLength(const double length);
	void SetWidth(const double width);
	void SetPoint(const double X, const double Y);

	Point& GetPoint();
	double GetLength();
	double GetWidth();
private:
	Point _point;
	double _length = .0;
	double _width = .0;
};

void IsCorrect(const double length, const double width);
void DemoRectangleWithPoint();

#endif // !_RECTANGLE_H_
