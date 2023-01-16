#pragma once
#ifndef _COLLISION_MANAGER_H_
#define _COLLISION_MANAGER_H_

#include "Rectangle.h"
#include "Ring.h"

static class CollisionManager
{
public:
	static bool IsCollision(Rectangle& firstRectangle, Rectangle& secondRectangle);
	static bool IsCollision(Ring& firstRing, Ring& secondRing);
};

#endif // !_COLLISION_MANAGER_H_

