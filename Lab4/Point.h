#pragma once

#ifndef _POINT_H_
#define _POINT_H_

class Point
{
public:
	Point();
	Point(const double X, const double Y);

	double GetX();
	double GetY();
private:

	void SetX(const double X);
	void SetY(const double y);

	double _x = .0;
	double _y = .0;
};

#endif // !_POINT_H_
