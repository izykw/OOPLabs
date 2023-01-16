#include "GeometricProgram.h"

void GeometricProgram::DemoCollision()
{
	Rectangle firstRectangle(Point(7, 7), 24, 12);
	Rectangle secondRectangle(Point(3, 3), 13, 5);
	if (CollisionManager::IsCollision(firstRectangle, secondRectangle))
	{
		std::cout << "First pair of rectangles collides" << std::endl;
	}
	else
	{
		std::cout << "First pair of rectangles does not collide" << std::endl;
	}


	Rectangle thirdRectangle(Point(12, 12), 15, 13);
	Rectangle fourthRectangle(Point(4, 4), 7, 1);
	if (CollisionManager::IsCollision(thirdRectangle, fourthRectangle))
	{
		std::cout << "Second pair of rectangles collides" << std::endl << std::endl;
	}
	else
	{
		std::cout << "Second pair of rectangles does not collide" << std::endl << std::endl;
	}


	Ring firstRing(Point(10, 10), 3, 2);
	Ring secondRing(Point(6, 6), 4, 1);
	if (CollisionManager::IsCollision(firstRing, secondRing))
	{
		std::cout << "First pair of rings collides" << std::endl;
	}
	else
	{
		std::cout << "First pair of rings does not collide" << std::endl;
	}


	Ring thirdRing(Point(8, 8), 3, 2);
	Ring fourthRing(Point(4, 4), 2, 1);
	if (CollisionManager::IsCollision(thirdRing, fourthRing))
	{
		std::cout << "Second pair of rings collides" << std::endl;
	}
	else
	{
		std::cout << "Second pair of rings does not collide" << std::endl;
	}
}

void GeometricProgram::DemoRectangleWithPoint()
{
	const int SIZE = 5;
	Rectangle rectangles[SIZE]
	{
		Rectangle(Point(3.2,3), 6, 7.8),
		Rectangle(Point(1.6,5), 9, 5),
		Rectangle(Point(8,32), 2.2, 3.76),
		Rectangle(Point(27,9), 9.4, 11),
		Rectangle(Point(1.89,7.1), 1.0, 7),
	};

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

void GeometricProgram::DemoRing()
{
	Ring ring1(Point(4.7, 2), 6.12, 1.53);
	std::cout << Ring::GetAllRingsCount() << "\t";
	Ring ring2(Point(1.3, 5), 2, 1.87);
	std::cout << ring1.GetAllRingsCount() << "\t";
	Ring ring3(Point(8, 1), 9.93, 8.86);
	std::cout << ring1.GetAllRingsCount() << std::endl;

	std::cout << "#" << 1 << " Area = " << ring1.GetArea() << std::endl;
	std::cout << "#" << 2 << " Area = " << ring2.GetArea() << std::endl;
	std::cout << "#" << 3 << " Area = " << ring3.GetArea() << std::endl;

	std::cout << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount() << std::endl;
	Ring* ring = new Ring(Point(25.0, 25.0), 10.0, 5.0);
	std::cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount() << std::endl;
	delete ring;
	std::cout << "Количество колец после вызова деструктора: " << Ring::GetAllRingsCount() << std::endl;
}
