#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle()
{
	this->_point.SetX(.0);
	this->_point.SetY(.0);
	this->_length = .0;
	this->_width = .0;
}

Rectangle::Rectangle(Point* point, const double length, const double width)
{
	IsCorrect(length, width);

	this->_point.SetX(point->GetX());
	this->_point.SetY(point->GetY());
	this->_length = length;
	this->_width = width;
}


void Rectangle::SetLength(const double length)
{
	if (length < 0)
	{
		throw std::exception("\nThe length cant be less than 0, please enter values again\n");
	}
	this->_length = length;
}

void Rectangle::SetWidth(const double width)
{
	//IsCorrect(0, 1); Как лучше?
	if (width < 0)
	{
		throw std::exception("\nThe length cant be less than 0, please enter values again\n");
	}
	this->_width = width;
}

void Rectangle::SetPoint(const double X, const double Y)
{
	this->_point.SetX(X);
	this->_point.SetY(Y);
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


void IsCorrect(const double length, const double width)
{
	if (length < 0)
	{
		throw std::exception("\nThe length cant be less than 0, please enter values again\n");
	}
	if (width < 0)
	{
		throw std::exception("\nThe length cant be less than 0, please enter values again\n");
	}
}

void DemoRectangleWithPoint()
{
	const int SIZE = 5;
	Rectangle rectangles[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		rectangles[i].SetLength(pow((i + 1.1), 2)); 
		rectangles[i].SetWidth(pow((i + 0.5), 2));
		rectangles[i].SetPoint((pow(i, 2) - 6.2), (pow(i, 2) + 2.2));
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Rectangle № " << i << " ";
		std::cout << "Length =\t" << rectangles[i].GetLength() << " ";
		std::cout << "Width =\t" << rectangles[i].GetWidth() << " ";
		std::cout << "Point X =\t" << rectangles[i].GetPoint().GetX() << " ";
		std::cout << "Point Y =\t" << rectangles[i].GetPoint().GetY() << std::endl;
	}

	double sumX = 0, sumY = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sumX += rectangles[i].GetPoint().GetX();
		sumY += rectangles[i].GetPoint().GetY();
	}

	std::cout << "CenterX =\t" << (sumX / SIZE) << "\tCenterY =\t" << (sumY / SIZE) << std::endl;

}
