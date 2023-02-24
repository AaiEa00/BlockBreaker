#pragma once
#include "Shape.h"

class Box :public Shape
{
	friend class CollisionDetector;

private:
	Vector2 leftTop{ 0.0f,0.0f };
	Vector2 rightBottom{ 0.0f,0.0f };

public:
	Box(const Vector2& lt, const Vector2& rb);
};