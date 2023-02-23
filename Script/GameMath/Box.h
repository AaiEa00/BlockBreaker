#pragma once
#include "Shape.h"

class Box :public Shape
{
	friend class CollisionDetector;

private:
	Vector2 leftTop{ 0.0f,0.0f };
	Vector2 leftBottom{ 0.0f,0.0f };
	Vector2 rightTop{ 0.0f,0.0f };
	Vector2 rightBottom{ 0.0f,0.0f };

public:
	Box();
};