#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& firstRectangle, Rectangle& secondRectangle)
{
	double x = abs(firstRectangle.GetPoint().GetX()) - abs(secondRectangle.GetPoint().GetX());
	double y = abs(firstRectangle.GetPoint().GetY()) - abs(secondRectangle.GetPoint().GetY());
	double length = (firstRectangle.GetLength() + secondRectangle.GetLength()) / 2;
	double width = (firstRectangle.GetWidth() + secondRectangle.GetWidth()) / 2;

	return (x < length && y < width);
}

bool CollisionManager::IsCollision(Ring& firstRing, Ring& secondRing)
{
	double sumOuterRadius = firstRing.GetOuterRadius() + secondRing.GetOuterRadius();
	double x = abs(firstRing.GetCenter().GetX() - secondRing.GetCenter().GetX());
	double y = abs(firstRing.GetCenter().GetY() - secondRing.GetCenter().GetY());
	double hypotenuse = sqrt(pow(x, 2) + pow(y, 2));

	return (hypotenuse < sumOuterRadius);
}

