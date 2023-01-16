#pragma once
#ifndef _RING_H_
#define _RING_H_

#include "Point.h"
#include "DoubleValidator.h"

class Ring
{
public:
	Ring(Point center, const double outerRadius, const double innerRadius);
	~Ring();

	void SetCenter(Point center);
	void SetRadius(const double outerRadius, const double innerRadius);

	Point& GetCenter();
	double GetOuterRadius();
	double GetInnerRadius();

	double GetArea();
	static int GetAllRingsCount();

private:

	static int AllRingsCount;

	Point _center;
	double _outerRadius = .0;
	double _innerRadius = .0;
};

#endif // !_RING_H_

